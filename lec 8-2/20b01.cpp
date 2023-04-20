/*1. WAP to perform some basic mathematical operations
using Abstract class such like:
- area of circle
- area of triangle
- area of rectangle
- use one single pure virtual function named
calculate() to perform all above operations*/

#include<iostream>
using namespace std;

class circle{
	public :
		virtual void calculate()=0;
};

class triangle{
	public :
		virtual void calculate()=0;
};

class rectangle{
	public :
		virtual void calculate()=0;
};

class shape : public circle,public triangle,public rectangle
{
	int r,h,b,rh,rw;
	public :
		void calculate()
		{
			cout<<"Enter radius of circle : ";
			cin>>r;
			cout<<"Area of circle is :- "<<3.14*r*r<<endl<<endl;
			cout<<"Enter height of triangle :- ";
			cin>>h;
			cout<<"Enter base of triangle :- ";
			cin>>b;
			cout<<"Area of triangle is :- "<<h*b/2<<endl<<endl;
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
