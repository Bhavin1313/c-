//4. WAP to create a class which Read and Print House details along with Room details.

#include<iostream>
using namespace std;

class room{
	
	int room_no;
	int window;
	int bed;
	int toilet;
	int floor;
	int  table;
	char color[20];

	
	public :
		
		input(){
			
			cout<<"Enter Room in house :- ";
			cin>>room_no;
			cout<<"Enter window in house :- ";
			cin>>window;
			cout<<"Enter bed in house:- ";
			cin>>bed;
			cout<<"Enter toilet in house :- ";
			cin>>toilet;
			cout<<"Enter floor in house :- ";
			cin>>floor;
			cout<<"Enter table in house :- ";
			cin>>table;
			cout<<"Enter color of house :- ";
			cin>>color;
			
		}
		
		output(){
			cout<<"\n\nRoom in house :- "<<room_no<<endl;
			cout<<"window in house :- "<<window<<endl;
			cout<<"bed in house:- "<<bed<<endl;
			cout<<"toilet in house :- "<<toilet<<endl;
			cout<<"floor in house :- "<<floor<<endl;
			cout<<"table in house :- "<<table<<endl;
			cout<<"color of house :- "<<color<<endl;
		}
};

main()
{
	room r;
	r.input();
	r.output();
	
}
