/*5. WAP to demonstrate example of hierarchical inheritance to get square and cube of a number.*/

#include<iostream>
using namespace std;

class A{
	protected :
	int n;
	public :
		A()
		{
			cout<<"Enter n :- ";
			cin>>n;
		}
};

class square : public A{
	public :
		void gets()
		{
			cout<<"Square of "<<n<<" is :- "<<n*n<<endl<<endl;
		}
};

class cube : public A{
	public :
		void getc()
		{
			cout<<"Cube of "<<n<<" is :- "<<n*n*n<<endl<<endl;
		}
};

main()
{
	square s;	
	s.gets();
	cout<<endl;
	cube c;
	c.getc();
}
