//n-employee
#include<iostream>
using namespace std;

class emp{
	
	int id;
	string name;
	string roll;
	int age;
	int salary;
	int exp;
	string city;
	static string c_name;
	
	public :
		
		setE(){
			
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
			cout<<endl;	
		}
		
		getE(){
			cout<<"id of Emp. \t:- "<<id<<endl;
			cout<<"name of Emp.   \t:- "<<name<<endl;
			cout<<"roll of Emp.   \t:- "<<roll<<endl;
			cout<<"age of Emp. \t:- "<<age<<endl;
			cout<<"salary of Emp. \t:- "<<salary<<endl;
			cout<<"exp of Emp. \t:- "<<exp<<endl;
			cout<<"city of Emp. \t:- "<<city<<endl;
			cout<<"compny of Emp.\t:- "<<c_name<<endl;
		}
};

string emp :: c_name = "TCS";

main()
{
	int n,i;
	
	cout<<"Enter number of employee :- ";
	cin>>n;
	emp E[n];

	for(i=0;i<n;i++)
	{
		cout<<"\nEmploye "<<i+1<<"\n\n";
		E[i].setE();
		E[i].getE();
	}	
}
