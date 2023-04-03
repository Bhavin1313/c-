//2. WAP to create a class to read and add two times.
#include<iostream>
using namespace std;

class time{

	int h,m;
	public :
	gettime()
	{
		cout << "Hour : ";
		cin >> h;
		cout << "min : ";
		cin >> m;
	}
	void display(time t1,time t2)
	{
		int HH,MM;
		HH=t1.h+t2.h;
		MM=t1.m+t2.m;
		while(MM>=60)
		{
			MM-=60;
			HH++;
		}
		cout << "Hour : " << HH << endl << "Min : " << MM;
	}
};
int main()
{
	time t1,t2,t3;
	t1.gettime();
	t2.gettime();
	t3.display(t1,t2);
}
