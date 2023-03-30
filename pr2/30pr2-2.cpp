//2. WAP to swap elements of two integer arrays using user define function.
#include<iostream>
using namespace std;



 void swap(int a[],int b[],int c[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		c[i]=a[i];
		a[i]=b[i];
		b[i]=c[i];
	}
	cout<<"Array after swaping\n\n";
	for(i=0;i<n;i++)
	{
		cout << "a[" << i+1 << "] : " << a[i] << endl;
	}
	
	cout<<endl;
	for(i=0;i<n;i++)
	{
		cout << "b[" << i+1 << "] : " << b[i] << endl;
	}
}

int main()
{
	int n,i;
	
	cout << "ENter N : ";
	cin >> n;
	
	int a[n],b[n],c[n];
	
	for(i=0;i<n;i++)
	{
		cout << "a[" << i+1 << "] :";
		cin >> a[i];
	}
	cout<<endl;
	for(i=0;i<n;i++)
	{
		cout << "b[" << i+1 << "] :";
		cin >> b[i];
	}
	swap(a,b,c,n);
}


