//1. WAP to create a class to read and add two distance. (e.g. 8 feet 16 inch + 4 feet 14 inch = 14 feet 6 inch)
#include<iostream>
using namespace std;

class dis {

	int feet ,inch;
	public :
	getdata()
	{
		cout << "Feet : ";
		cin >> feet;
		cout << "inch : ";
		cin >> inch;
	}
	display(dis d1,dis d2)
	{
		int f,i;
		f=d1.feet+d2.feet;
		i=d1.inch+d2.inch;
		while (i>=12)
		{
			i-=12;
			f++;
		}
		cout << "Feet : " << f << endl << "Inch : " << i;
	}
};
main()
{
	dis d1,d2,d3;
	d1.getdata();
	d2.getdata();
	d3.display(d1,d2);
}
