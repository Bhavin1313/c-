
/*1. WAP to print rate of interests of different banks using
hierarchical inheritance:
- Class RBI -> Class SBI
- Class RBI -> Class BOB
- Class RBI -> Class ICICI
- inherit rate attribute and getROI() method in all child
classes*/
#include<iostream>
using namespace std;

class RBI{
	public :
	int rate=6;
};

class SBI : public RBI
{
	
	public : 
	void getROI(){
		cout<<"rate of interests of sbi is :- "<<rate;
	}	
};

class BOB : public RBI
{
	
	public : 
	void getROI(){
		cout<<"rate of interests of bob is :- "<<rate;
	}	
};

class ICICI : public RBI
{
	
	public : 
	void getROI(){
		cout<<"rate of interests of icici is :- "<<rate;
	}	
};

main()
{
	SBI s;
	BOB b;
	ICICI i;
	s.getROI();
	cout<<endl;
	b.getROI();
	cout<<endl;
	i.getROI();
	
}
