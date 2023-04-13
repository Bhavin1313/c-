/*3. WAP with a mother class animal. Inside it define a name and an age variables, and set_value() function.
 Then create two bases class Zebra and Dolphin which write a message telling the age, 
 the name and giving some extra information (e.g. place of origin).*/
 
#include<iostream>
using namespace std;

class animal{
	protected :
	string name;
	int age;
	public:
		void set_value()
		{
			cout<<"Enter name of animal :- ";
			cin>>name;
			cout<<"Enter age of animal :- ";
			cin>>age;
		}
};

class Zebra : public animal
{
	public :
		void input()
		{
			cout<<"Enter name of animal :- ";
			cin>>name;
			cout<<"Enter age of animal :- ";
			cin>>age;
		}
		void extra ()
		{
			cout<<"Name of animal :- "<<name<<endl;
			cout<<"Age of animal :- "<<age<<endl;
			cout<<"Place of origin :- Africa";
		}
};

class Dolphin : public animal
{
	public :
		void input()
		{
			cout<<"Enter name of animal :- ";
			cin>>name;
			cout<<"Enter age of animal :- ";
			cin>>age;
		}
		void extra()
		{
			cout<<"Name of animal :- "<<name<<endl;
			cout<<"Age of animal :- "<<age<<endl;
			cout<<"Place of origin :- Goa";
		}
};

main()
{
	Zebra z;
	z.input();
	z.extra();
	cout<<endl;
	Dolphin d;
	d.input();
	d.extra();
}
