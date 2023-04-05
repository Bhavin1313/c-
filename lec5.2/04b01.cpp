/*1. WAP to get and display N numbers of Hotels and static
information using encapsulation with array of objects
member by including below mentioned attributes:
- hotel_id
- hotel_name
- hotel_type (like hotel or motel)
- hotel_rating (like 1 Star, 2 Start, ..., 7 Star)
- hotel_location (city name)
- hotel_establish_year
- hotel_staff_quantity
- hotel_room_quantity*/

#include<iostream>
using namespace std;

class Hotel{
	int hotel_id;
	string hotel_name;
	string hotel_type;
	string hotel_rating;
	int hotel_establish_year;
	int hotel_staff_quantity;
	int hotel_room_quantity;
	static string hotel_location;
	
	public :
	
	void setH(){
		cout<<"Enter the hotel id :- ";
		cin>>hotel_id;
		cout<<"Enter the hotel name :- ";
		cin>>hotel_name;
		cout<<"Enter the hotel type :- ";
		cin>>hotel_type;
		cout<<"Enter the hotel rating :- ";
		cin>>hotel_rating;
		cout<<"Enter the hotel year :- ";
		cin>>hotel_establish_year;
		cout<<"Enter the hotel staff quantity :- ";
		cin>>hotel_staff_quantity;
		cout<<"Enter the hotel room quantity :- ";
		cin>>hotel_room_quantity;
		cout<<endl;
	}
	void getH(){
		cout<<"the hotel id :- "<<hotel_id<<endl;
		cout<<"the hotel name :- "<<hotel_name<<endl;
		cout<<"the hotel type :- "<<hotel_type<<endl;
		cout<<"the hotel rating :- "<<hotel_rating<<endl;
		cout<<"the hotel location :- "<<hotel_location<<endl;
		cout<<"the hotel establish year :- "<<hotel_establish_year<<endl;
		cout<<"the hotel staff quantity :- "<<hotel_staff_quantity<<endl;
		cout<<"the hotel room quantity :- "<<hotel_room_quantity<<endl<<endl;
	}
};

string Hotel :: hotel_location = "Surat";

main()
{
	int n,i;
	cout<<"Enter the number of hotel :- ";
	cin>>n;
	Hotel h[n];
	
	for(i=0;i<n;i++)
	{
		cout<<"\nHotel "<<i+1<<"\n\n";
		h[i].setH();
		h[i].getH();
	}
}
