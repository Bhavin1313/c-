//4. WAP to illustrate the use of inline function by creating a function which prints a multiplication table of given number.
#include<iostream>
using namespace std;

inline void table(int n,int i)
{
	cout << n << " X " << i << " = " << n*i << endl;
}

main()
{
	int n,i;
	cout << "Enter your number : ";
	cin >> n;
	
	for(i=1;i<=10;i++)
	{
		table(n,i);	
	}
	
}


