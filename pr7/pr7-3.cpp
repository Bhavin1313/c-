/*3) WAP to demonstrate usage of Virtual Function.*/

#include<iostream>
using namespace std;

class rectangle{
	public :
		virtual void calculate()=0;
};

class shape : public rectangle
{
	int rh,rw;
	public :
		void calculate()
		{
			cout<<"Enter height of rectangle :- ";
			cin>>rh;
			cout<<"Enter width of rectangle :- ";
			cin>>rw;
			cout<<"Area of rectangle is :- "<<rh*rw<<endl<<endl;
			
		}
};

main()
{
	rectangle *r=new shape();
	r->calculate();
}
