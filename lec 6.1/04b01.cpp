/*1. WAP to find sum of all three number’s cubes by
implementing single level inheritance: Class X->Class Y
- Class X has following members: a, b & c attributes in
integer data type
- Class Y has following members: setData() and
getData() methods*/

#include<iostream>
using namespace std;

class X{
	protected :
	int a,b,c;
};

class Y : public X
{
	
	public : 
	void setData(){
		cout<<"Enter A :- ";
		cin>>a;
		cout<<"Enter B :- ";
		cin>>b;
		cout<<"Enter C :- ";
		cin>>c;
	}
	void getData(){
		cout<<"Cube of "<<a<<" is :- "<<a*a*a<<endl;
		cout<<"Cube of "<<b<<" is :- "<<b*b*b<<endl;
		cout<<"Cube of "<<c<<" is :- "<<c*c*c<<endl;
		
		cout<<"Sum of all three cube is :- "<<(a*a*a)+(b*b*b)+(c*c*c)<<endl;
	}
	
};

main()
{
	Y y;
	y.setData();
	y.getData();
	
}
