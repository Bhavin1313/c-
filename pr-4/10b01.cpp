/*1. WAP to make Railway Reservation System.
Requirements:
(A) User Input Train Number , Train Name , Source , Destination , Train Time.
(B) Display Record By Search Train Number.
(C) Minimum 3 Input Train Record.*/

#include<iostream>
using namespace std;

class Railway{
	int t_number,t_time;
	string t_name,source,destination;
	
	public:
		void rail(){
			
			cout << "Enter Train Number : ";
			cin >> t_number;
			cout << "Enter Train Name : ";
			cin >> t_name;
			cout << "Enter Source : ";
			cin >> source;
			cout << "Enter Destination : ";
			cin >> destination;
			cout << "Enter Train time : ";
			cin >> t_time;
		}
		
		void raillist(){
			
			cout << endl<<"Train Number : " << t_number << endl;
			cout << "Train Name : " << t_name << endl;
			cout << "Source : " << source << endl;
			cout << "Destination : " << destination << endl;
			cout << "Train time : " << t_time << endl;
		}
		friend display(Railway []);
};

display(Railway r[])
{
	int n;
	cout << "Eneter Number : ";
	cin >> n;
	for(int i=0;i<3;i++)
	{
		if(r[i].t_number==n)
		{
			r[i].raillist();
		}
	}
	
}


main (){
	
	int i;
	Railway r[3];
	
	for(i=0;i<3;i++)
	{
		cout<<"Enter ditail of train"<<i+1<<""<<endl<<endl;
		r[i].rail();
		cout<<endl;
	}
	
	for(i=0;i<3;i++)
	{
		cout<<"ditail of train"<<i+1<<" "<<endl<<endl;
		r[i].raillist();
		cout<<endl;
	}
	
	cout<<"Enter your train number"<<endl;
	cout<<endl;
	display(r);
}
