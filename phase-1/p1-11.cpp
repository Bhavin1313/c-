/*11.raman have an idea to impress his computer teacher by solving square root of number
without using any programming library.write a c++ program to help raman. 
*/
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

