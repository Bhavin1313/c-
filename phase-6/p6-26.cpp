/*26. By using Multilevel Inheritance, implement below
mentioned structure in C++ for employee records system.

Use proper implementation of Encapsulation, static*/

#include<iostream>
using namespace std;

class P{
	public:
	int id,age,salary,experience;   
	string name, email,city,role;
	static string company_name;
	
	public :
		void setterP(int id,string name,int age)
		{
			this->id=id;
			this->name=name;
			this->age=age;
		}
};

string P::company_name="Bhagwati";

class Q : public P
{
	public :
		void setterQ(string role,int salary,int experience)
		{
			this->role=role;
			this->salary=salary;
			this->experience=experience;
		}  
};

class R : public Q
{
	public :
		void setterR(string email,string city)
		{
			this->email=email;
			this->city=city;
		}
		void getterR()
		{
			cout<<endl<<endl<<"The id of employee : "<<id<<endl;
			cout<<"the role of employee : "<<role<<endl;
			cout<<"The salary of employee : "<<salary<<endl<<endl<<endl;
		}
};

class S : public R
{   
	public :
		void getterS()
		{
			cout<<endl<<endl<<"The id of employee : "<<id<<endl;
			cout<<"the name of employee : "<<name<<endl;
			cout<<"the age of employee : "<<age<<endl;
			cout<<"the salary of employee : "<<salary<<endl;
			cout<<"the experience of employee : "<<experience<<endl;
			cout<<"the email of employee : "<<email<<endl;
			cout<<"the company name of employee : "<<company_name<<endl;
			cout<<"the city of employee : "<<city<<endl;
			cout<<"the role of employee : "<<role<<endl;
			
		}
};

main()
{
	int id,age,salary,experience;   
	string name, email,city,role;
	
	cout<<"Enter id of employee : "; cin>>id;
	cout<<"Enter name of employee : "; cin>>name;
	cout<<"Enter age of employee : "; cin>>age;
	cout<<"Enter salary of employee : "; cin>>salary;
	cout<<"Enter experience of employee : "; cin>>experience;
	cout<<"Enter email of employee : "; cin>>email;
	cout<<"Enter city of employee : "; cin>>city;
	cout<<"Enter role of employee : "; cin>>role;
	
	S s;
	s.setterP(id, name, age);
	s.setterQ(role, salary, experience);
	s.setterR(email, city);
	s.getterR();
	s.getterS();
}
