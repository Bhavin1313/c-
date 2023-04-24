/*1. WAP to implement exception handling mechanism for
different types of scenarios:
- a number cannot be divide by zero
- a person cannot be able to vote if his/her age is less
than 18
- a password cannot be validate if it doesn’t contains
an uppercase letter*/

#include<iostream>
using namespace std;

main()
{
	string pass;
	int age,div,flag;
	float a,b;
	
	cout<<"\n\nDivision\n\n";
	cout<<"Enter A :- ";
	cin>>a;
	cout<<"Enter B :- ";
	cin>>b;
	div=a/b;
	
	try{
		if(b!=0)
		{
			cout<<"The division of A and B is :- "<<div;
		}
		else
		{
			throw div;
		}
	}
	catch(...)
	{
		cout<<"A number cannot be divide by zero"<<endl;
	}
	
	cout<<"\n\nVoting\n\n";
	
	cout<<"Enter your age :- ";
	cin>>age;
	try{
		if(age>=18)
		{
			cout<<"you are abal to voting";
		}
		else
		{
			throw age;
		}
	}
	catch(...)
	{
		cout<<"You are not abal to voting";
	}
	
	cout<<"\n\nPassword\n\n";
	
	cout<<"Enter your password :- ";
	cin>>pass;
	for(int i=0;pass[i]!=NULL;i++)
	{
		if(pass[i]>=65 && pass[i]<=90)
		{
			flag++;
		}
	}
	try{
		if(flag>=1)
		{
			cout<<"Your Password is valid...";
		}
		else
		{
			throw flag;
		}
	}
	catch(...)
	{
		cout<<"Your Password is not valid...";
	}
}
