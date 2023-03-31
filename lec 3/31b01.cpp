/*1. WAP to get and display 5 Employees
information using class and object by including
below mentioned attributes:
- emp_id
- emp_name
- emp_role
- emp_age
- emp_salary
- emp_experience
- emp_city
- emp_company_name */

#include<iostream>
using namespace std;

class emp{
	
	int id;
	char name[20];
	char roll[25];
	int age;
	int salary;
	int exp;
	char city[20];
	char c_name[20];
	
	public :
		
		input(){
			
			cout<<"Enter id of Emp. :- ";
			cin>>id;
			cout<<"Enter name of Emp. :- ";
			cin>>name;
			cout<<"Enter roll of Emp. :- ";
			cin>>roll;
			cout<<"Enter age of Emp. :- ";
			cin>>age;
			cout<<"Enter salary of Emp. :- ";
			cin>>salary;
			cout<<"Enter exprience of Emp. :- ";
			cin>>exp;
			cout<<"Enter city of Emp. :- ";
			cin>>city;
			cout<<"Enter compnyname of Emp. :-  ";
			cin>>c_name;
			
		}
		
		output(){
			cout<<"id of Emp. :- "<<id<<endl;
			cout<<"name of Emp. :- "<<name<<endl;
			cout<<"roll of Emp. :- "<<roll<<endl;
			cout<<"age of Emp. :- "<<age<<endl;
			cout<<"salary of Emp. :- "<<salary<<endl;
			cout<<"exprience of Emp. :- "<<exp<<endl;
			cout<<"city of Emp. :- "<<city<<endl;
			cout<<"compnyname of Emp. :- "<<c_name<<endl;
		}
};

main()
{
	emp e[5];
	int i;
	cout<<"Enter informetion of emp\n\n";
	for(i=0;i<5;i++)
	{
		cout<<"\nEmploye ["<<i+1<<"]\n\n";
		e[i].input();
	}
	for(i=0;i<5;i++)
	{
		cout<<"\nEmploye ["<<i+1<<"]\n\n";
		e[i].output();
	}
	
}
