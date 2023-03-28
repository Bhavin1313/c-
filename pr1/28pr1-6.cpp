//6. WAP to generate cube of given 5 numbers and make an array of that generated cubes.

#include<iostream>

using namespace std;

main()
{
	int a[5],b[5];
	int i;
	
	for(i=0;i<5;i++)
	{
		cin>>a[i];
		b[i]=a[i]*a[i]*a[i];
	}
	for(i=0;i<5;i++)
	{
		cout<<b[i]<<" ";
	}
	
	
}
