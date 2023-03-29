#include<iostream>

using namespace std;

void sum()
{
	int a,b,sum;
	cout<<"Enter the value of a : ";
	cin>>a;
	cout<<"Enter the value of b : ";
	cin>>b;
	

	
	cout<<"Sum is :- "<<a+b;
}



void sub()
{
	int a,b,sub;
	cout<<"Enter the value of a : ";
	cin>>a;
	cout<<"Enter the value of b : ";
	cin>>b;
	

	
	cout<<"Sub is :- "<<a-b;
}

void div()
{
	int a,b,div;
	cout<<"Enter the value of a : ";
	cin>>a;
	cout<<"Enter the value of b : ";
	cin>>b;
	

	
	cout<<"div is :- "<<a/b;
}

void multy()
{
	int a,b,multy;
	cout<<"Enter the value of a : ";
	cin>>a;
	cout<<"Enter the value of b : ";
	cin>>b;
	

	
	cout<<"Multiplication is :- "<<a*b;
}

void mod()
{
	int a,b,mod;
	cout<<"Enter the value of a : ";
	cin>>a;
	cout<<"Enter the value of b : ";
	cin>>b;
	

	
	cout<<"Remainder is :- "<<a%b;
}

main()
{
	int n=1;
	
	while(n!=0)
	{
		
		cout<<"\nPress 1 for SUM\n";
		cout<<"Press 2 for SUB\n";
		cout<<"Press 3 for DIV\n";
		cout<<"Press 4 for MULTY\n";
		cout<<"Press 5 for MOD\n";

		cout<<"Enter your choice :- ";
		cin>>n;	
	
		switch (n)
	 {
		case 1:
		    sum(); 
		    break;
		case 2:
		    sub();
		    break;
		case 3:
		    div();
		    break;
		case 4:
		    multy();
		    break;
		case 5:
		    mod();
		    break;
		
		default:

		    cout<<"Invelid choice";
		    break;

	 }
	 
	}
}




