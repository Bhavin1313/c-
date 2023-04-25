/*1. WAP to create a class which illustrate the concept of handling all types of exceptions using general exception.*/
#include<iostream>
using namespace std;

class div1{
	int a,b,div;
	
	public :
		void input()
		{
			cout<<"Enter A :- ";
			cin>>a;
			cout<<"Enter B :- ";
			cin>>b;
			div=a/b;
		}
		void output()
		{
			try{
				if(b!=0)
				{
					cout<<"the division of a and b is :- "<<div;
				}
				else
				{
					throw "daman";
				}
			}
			catch(...){
					cout<<"\nThe number cannot divide by zero";
				}
		}
};

main()
{
	div1 d;
	d.input();
	d.output();
}
