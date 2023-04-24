/*1. WAP to abstract some attributes of class Admin to
prevent them to be inherited by its child classes.
- Class Admin -> Class Manager
- Class Manager -> Class Employee
- Class Admin has following members:
- company_name
- manager_salary
- employee_salary
- total_staff
- total_annual_revenue
- can_terminate
- use all attributes accessibility in parent class and
child class properly.
- override a method myAccess() in both child
classes to display all parent class’s members value
accordingly.*/

#include<iostream>
using namespace std;

class Admin
{
	protected :
	string can_terminate;
	int manager_salary,total_staff,total_annual_revenue;
	
	public :
		void input(){
			cout<<"Enter manager salary :- ";
			cin>>manager_salary;
			cout<<"Enter totle staff :- ";
			cin>>total_staff;
			cout<<"Enter total annual revenue :- ";
			cin>>total_annual_revenue;
			cout<<"Can terminate or not :- ";
			cin>>can_terminate;

		}
		
};

class Manager : public Admin
{
	protected :
	string company_name;
	int employee_salary;	
	public :
	void input(){
		cout<<"Enter compny name :- ";
		cin>>company_name;
		cout<<"Enter employee salary :- ";
		cin>>employee_salary;
	}
	void myAccess(){
		cout<<"manager salary :- "<<manager_salary<<endl;
		cout<<"totle staff :- "<<total_staff<<endl;
		cout<<"total annual revenue :- "<<total_annual_revenue<<endl;
		cout<<"Can terminate or not :- "<<can_terminate<<endl;	
	} 		
};

class Employee : public Manager
{
	public :
		void myAccess(){
			cout<<"company name :- "<<company_name<<endl;
			cout<<"employee salary :- "<<employee_salary<<endl;
		} 
};

main()
{
	Employee e;
	e.Admin::input();
	e.input();
	cout<<endl<<endl;
	e.Manager::myAccess();
	cout<<endl;
	cout<<endl;
	e.myAccess();
	
}
