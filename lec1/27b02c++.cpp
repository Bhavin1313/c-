//3. WAP to convert given string into toggle case.

#include<iostream>

using namespace std;

main()

{
	char a[10];
	
	int i;
	
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<10;i++)
	{
		if(a[i]>96 && a[i]<123)
		{
			a[i]-=32;
			cout<<a[i];
		}
		else
		{
			a[i]+=32;
			cout<<a[i];
		}
	}
}
