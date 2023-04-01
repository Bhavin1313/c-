//1. WAP to find all even elements from given 1D array.

#include<iostream>

using namespace std;

main()
{
	int n;
	
	cout<<"Enter sizeof array :- ";
	cin>>n;
	
	int a[n];
	int i;
	
	cout<<"Enter elements of array : - ";	
	for(i=0;i<n;i++)
	{
		
		cin>>a[i];
	}
	
	cout<<"Even number is ";
	for(i=0;i<n;i++)
	{
		
		if(a[i]%2==0)
		{
			cout<<" " <<a[i];
		}
	}
}
