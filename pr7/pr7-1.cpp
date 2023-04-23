/*1) WAP to illustrate the abstract class in C++.*/

#include<iostream>
using namespace std;

class A{
	public :
		virtual void abs() = 0; 
};

class B : public A
{
	public:
		void abs()
		{
			cout<<"Hello ";
		}
};
main()
{
	B b;
	b.abs();
}
