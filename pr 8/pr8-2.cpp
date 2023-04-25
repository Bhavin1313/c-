/*2. Create hybrid inheritance and remove ambiguity permanently.*/

#include<iostream>
using namespace std;

class getValue{
	public :
		virtual void input()=0;
		virtual void output()=0;
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

class C : public A,public B,public getValue
{
	public :
	void output()
	{
		cout<<"The sum of a and b is :- "<<a+b;	
	}	
};

main()
{
	getValue *c=new A();
	c->input();
	getValue *c1=new B();
	c1->input();
	getValue *c2=new C();
	c2->output(); 
	

	
}
