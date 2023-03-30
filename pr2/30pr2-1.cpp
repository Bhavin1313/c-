//1. WAP to pass function as an argument to a function.

#include<iostream>
using namespace std;

int sum (int a,int b)
{
	
	cout<<"Sum of "<<a<<" and "<<b<<" is :- "<<a+b<<endl;
	return a+b; 
	
}
void ave(int c)
{
	cout << " average is : " << c/2 ;  
}


int main()
{
	int a,b;
	cout << "Enter A : ";
	cin >> a;
	cout << "Enter B : ";
	cin >> b;
	ave(sum(a,b));
}
