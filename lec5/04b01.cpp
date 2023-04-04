/*1. WAP to get and display 5 Students information using
encapsulation by including below mentioned
attributes:
- stu_id
- stu_name
- stu_age
- stu_course
- stu_email
- stu_city
- stu_college*/

#include<iostream>
using namespace std;

class stud{
	
	int id;
	string name;
	string course;
	int age;
	string e_mail;
	string city;
	string c_name;
	
	public :
		
		setS(int id,string name,string course,int age,string e_mail,string city,string c_name){
			this->id=id;
			this->name=name;
			this->course=course;
			this->age=age;
			this->e_mail=e_mail;
			this->city=city;
			this->c_name=c_name;
			
			
		}
		
		getS(){
			cout<<"id of student :- "<<id<<endl;
			cout<<"name of student :- "<<name<<endl;
			cout<<"course of student :- "<<course<<endl;
			cout<<"age of student :- "<<age<<endl;
			cout<<"E-mail of student :- "<<e_mail<<endl;
			cout<<"city of student :- "<<city<<endl;
			cout<<"collage of student :- "<<c_name<<endl;
		}
};

main()
{
	int id;
	string name;
	string course;
	int age;
	string e_mail;
	string city;
	string c_name;
	
	
	
	int i;
	stud s[5];
	
	for(i=0;i<5;i++)
	{
		cout<<"\nStudent ["<<i+1<<"]\n\n";
		cout<<"Enter id of student :- ";
		cin>>id;
		cout<<"Enter name of student :- ";
		cin>>name;
		cout<<"Enter course of student :- ";
		cin>>course;
		cout<<"Enter age of student :- ";
		cin>>age;
		cout<<"Enter E-mail of student :- ";
		cin>>e_mail;
		cout<<"Enter city of student :- ";
		cin>>city;
		cout<<"Enter collage of student :- ";
		cin>>c_name;

		s[i].setS(id,name,course,age,e_mail,city,c_name);
	
	}
	for(i=0;i<5;i++)
	{
		cout<<"\nStudent ["<<i+1<<"]\n\n";
		s[i].getS();
	}

	
}
