/*1. WAP to perform all basic arithmetic operations such
like +, -, *, and / operations by implementing method
overloading using total 2 classes.
- use only one method named calculate() in child
class
- if you pass 2 arguments, perform division
- if you pass 3 arguments, perform subtraction
- if you pass 4 arguments, perform multiplication
- if you pass 5 arguments, perform addition*/

#include<iostream>
using namespace std;

class A{
	public :
	int a,b,c,d,e;
	
	public :
		void input(){
			cout<<"Enter A :- ";
			cin>>a;
			cout<<"Enter B :- ";
			cin>>b;
			cout<<"Enter C :- ";
			cin>>c;
			cout<<"Enter D :- ";
			cin>>d;
			cout<<"Enter E :- ";
			cin>>e;
		}
};

class B : public A{
	public :
		void calculate(float a,float b)
		{
			cout<<"the division of "<<a<<" and "<<b<<" is :- "<<a/b<<endl;
		}
		void calculate(int c,int d,int e)
		{
			cout<<"the sub of "<<c<<" , "<<d<<" and "<<e<<" is :- "<<c-d-e<<endl;
		} 
		void calculate(int a,int b,int c,int d)
		{
			cout<<"the multiplication of "<<a<<" , "<<b<<" , "<<c<<" and "<<d<<" is :- "<<a*b*c*d<<endl;
		}
		void calculate(int a,int b,int c,int d,int e)
		{
			cout<<"the addition of "<<a<<" , "<<b<<" , "<<c<<" , "<<d<<" and "<<e<<" is :- "<<a+b+c+d+e<<endl;
		}	
};
main(){
	
	B b1;
	b1.input();
	b1.calculate(b1.a,b1.b);
	b1.calculate(b1.c,b1.d,b1.e);
	b1.calculate(b1.a,b1.b,b1.c,b1.d);
	b1.calculate(b1.a,b1.b,b1.c,b1.d,b1.e);
}
