/*2. Create hybrid inheritance and remove ambiguity permanently.*/

#include<iostream>
using namespace std;

class getValue{
	public :
		virtual void input()=0;
};

class A : public getValue
{
	public :
	int a;
	public :
		void input()
		{
			cout<<"Enter A :- ";
			cin>>a;	
		}	
};

class B : public getValue
{
	public :
	int b;
	public :
		void input()
		{
			cout<<"Enter B :- ";
			cin>>b;
		}
};

class C : public A,public B
{
	public :
	void output()
	{
		cout<<"The sum of a and b is :- "<<A::a+B::b;	
	}	
};

main()
{
	getValue *c=new A();
	c->input();
	getValue *c1=new B();
	c1->input();
	C d;
	d.output();
	

	
}
