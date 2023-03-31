/*2. WAP to get and display 4 Cars information
using class and object by including below
mentioned attributes:
- car_id
- car_company_name
- car_color
- car_model
- car_release_year */

#include<iostream>
using namespace std;

class car{
	
	int id;
	char company_name[20];
	char color[25];
	char model[30];
	int release_year;
	
	public :
		
		input(){
			cout<<"Enter id of car :- ";
			cin>>id;
			cout<<"Enter company name of car :- ";
			cin>>company_name;
			cout<<"Enter color of car :- ";
			cin>>color;
			cout<<"Enter model of car :- ";
			cin>>model;
			cout<<"Enter release year of car :- ";
			cin>>release_year;
		}
		
		output(){
			cout<<"id of car :- "<<id<<endl;
			cout<<"company name of car :- "<<company_name<<endl;
			cout<<"color of car :- "<<color<<endl;
			cout<<"model of car :- "<<model<<endl;
			cout<<"release_year of car :- "<<release_year<<endl;
		}
};

main()
{
	car c[3];
	int i;
	cout<<"Enter informetion of emp\n\n";
	for(i=0;i<3;i++)
	{
		cout<<"\nCar ["<<i+1<<"]\n\n";
		c[i].input();
	}
	for(i=0;i<3;i++)
	{
		cout<<"\nCar["<<i+1<<"]\n\n";
		c[i].output();
	}
	
}
