//5. WAP which illustrates the use of public and private access modifiers.
#include<iostream>

using namespace std;

class m{
	
	int a,b;
	
	public : 
	
	sum(){
		
		cout<<"Enter A :- ";
		cin>>a;
		cout<<"Enter B :- ";
		cin>>b;
	}
	
	sum1(){
		
		cout<<"Sum of "<<a<<" and "<<b<<" is :- "<<a+b;
	}
};

main(){
	
	m m1;
	m1.sum();
	m1.sum1();
}
