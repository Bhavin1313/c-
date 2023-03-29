//1. WAP to find factorial of all elements from given array using inline function.

#include<iostream>

using namespace std;

inline fact(int n){
	
	int f=1;
	while(n>=1)
	{
		f=f*n;
		n--;
	}
	
	return f;
	
}

main()
{
	int n,i,a[n];
	
	cout<<"Enter size of array :- ";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cout<<"Enter elements of array :- ";
		cin>>a[i];
	}
	
	cout<<"Factorial of array is :- ";
	for(i=0;i<n;i++)
	{
		cout<<fact(a[i])<<" ";
		
	}
}
