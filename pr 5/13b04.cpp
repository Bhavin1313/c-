/*4. WAP to read and print employee information using multiple inheritance.*/
#include<iostream>
using namespace std;

class A{
	protected :
	string name,roll;
	
	public :
		void inputa()
		{
			cout<<"Enter name of employee :- ";
			cin>>name;
			cout<<"Enter roll of employee :- ";
			cin>>roll;		
		}
};

class B{
	protected :
	int id,age;
	
	public :
		void inputb()
		{
			cout<<"Enter age of employee :- ";
			cin>>age;
			cout<<"Enter id of employee :- ";
			cin>>id;		
		}
};

class C : public A,public B
{
	public :
	void output()
		{
			cout<<"Name of employee :- "<<name<<endl;
			cout<<"Age of employee :- "<<age<<endl;
			cout<<"Roll of employee :- "<<roll<<endl;
			cout<<"Id of employee :- "<<id<<endl;
		}	
};

main()
{
	C c;
	c.inputa();
	c.inputb();
	c.output();
}
