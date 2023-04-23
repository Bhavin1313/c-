/*2) WAP to illustrate the use of access modifiers in inheritence.*/

#include<iostream>
using namespace std;

class I{
	public :
		virtual void input() = 0;
};

class V : public I
{
	string n;
	public :
		void input()
		{
			cout<<"Enter your name :- ";
			cin>>n;
		}
		void output()
		{
			cout<<"Your name is :- "<<n;
		}
};

main()
{
	V v;
	v.input();
	v.output();
}

