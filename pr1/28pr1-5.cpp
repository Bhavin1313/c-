//5. WAP to find square root of given numbers from array elements.

#include<iostream>

using namespace std;

main()
{
	int n,i;
	
	cout<<"Enter n :- ";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		if(i*i==n)
		{
			cout<<"square root :- "<<i;
		}
	}
	
}
