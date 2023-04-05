//n student
#include<iostream>
using namespace std;

class stud{
	
	int id;
	string name;
	string course;
	int age;
	string e_mail;
	string city;
	static string c_name;
	
	public :
		
		setS(){
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
			cout<<endl;	
		}
		
		getS(){
			cout<<"id of student :- "<<id<<endl;
			cout<<"name of student :- "<<name<<endl;
			cout<<"course of student :- "<<course<<endl;
			cout<<"age of student :- "<<age<<endl;
			cout<<"E-mail of student :- "<<e_mail<<endl;
			cout<<"city of student :- "<<city<<endl;
			cout<<"collage of student :- "<<c_name<<endl<<endl;
		}
};

string stud :: c_name = "Red & White";

main()
{
	int n,i;
    cout<<"Enter numbeer of student :- ";
	cin>>n;
	stud s[n];
	
	for(i=0;i<n;i++)
	{
		cout<<"\nStudent "<<i+1<<"\n\n";
		s[i].setS();
		s[i].getS();
	
	}	
}
