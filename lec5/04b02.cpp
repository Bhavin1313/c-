/*2. WAP to get and display 5 Customers
information using encapsulation by including
below mentioned attributes:
- cust_id
- cust_name
- cust_age
- cust_telecome_brand_name (like Jio, Airtel, Vi, etc.)
- cust_mobile_number
- cust_city
- cust_simcard_validity (in years)*/
#include<iostream>
using namespace std;

class cust{
	
	int id;
	string name;
	int age;
	string t_b_name;
	int m_no;
	string city;
	int s_v;
	
	public :
		
		setS(int id,string name,int age,string t_b_name,int m_no,string city,int s_v){
			this->id=id;
			this->name=name;
			this->age=age;
			this->t_b_name=t_b_name;
			this->m_no=m_no;
			this->city=city;
			this->s_v=s_v;
			
			
		}
		
		getS(){
			cout<<"id of Customer :- "<<id<<endl;
			cout<<"name of Customer :- "<<name<<endl;
			cout<<"age of Customer :- "<<age<<endl;
			cout<<"telecom brand name of Customer :- "<<t_b_name<<endl;
			cout<<"mobail number of Customer :- "<<m_no<<endl;
			cout<<"city of Customer :- "<<city<<endl;
			cout<<"simcard validity of Customer :- "<<s_v<<endl;
		}
};

main()
{
	int id;
	string name;
	int age;
	string t_b_name;
	int m_no;
	string city;
	int s_v;
	
	
	
	int i;
	cust c[5];
	
	for(i=0;i<5;i++)
	{
		cout<<"\nCustomer ["<<i+1<<"]\n\n";
		cout<<"Enter id of Customer :- ";
		cin>>id;
		cout<<"Enter name of Customer :- ";
		cin>>name;
		cout<<"Enter age of Customer :- ";
		cin>>age;
		cout<<"Enter telecom brand name of Customer :- ";
		cin>>t_b_name;
		cout<<"Enter mobail number of Customer :- ";
		cin>>m_no;
		cout<<"Enter city of Customer :- ";
		cin>>city;
		cout<<"Enter simcard validity of Customer :- ";
		cin>>s_v;

		c[i].setS(id,name,age,t_b_name,m_no,city,s_v);
	
	}
	for(i=0;i<5;i++)
	{
		cout<<"\nCustomer ["<<i+1<<"]\n\n";
		c[i].getS();
	}

	
}
