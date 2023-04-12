/*2. WAP to convert given degree celsius temperature into
fahrenheit and convert that fahrenheit temperature
into kelvin by implementing multilevel inheritance:
Class P -> Class Q -> Class R
- Class P has following members: temperature
attribute in float
- Class Q has following members: toFehrenheit()
method
- Class R has following members: toKelvin() method*/

#include<iostream>

using namespace std;

class P{
	
	protected :
	int t;
	
	public :
		void ask()
		{
			cout<<"Enter temperature in celsius :- ";
			cin>>t;
		}	
};

class Q : public P
{
	protected :
	int f;
	
	public :
		void toFehrenheit()
		{
			f=t*1.8 +32;
			cout<<"temperature in Fehrenheit :- "<<f<<endl;		
		}	
};

class R : public Q
{
	protected :
	float k;
	
	public :
	    void toKelvin()
		{
			k=(f-32) * 5.56 + 273.15;
			cout<<"temperature in Kelvin :- "<<k<<endl;	
		}	
};

main()
{
	R r;
	r.ask();
	cout<<endl;
	r.toFehrenheit();
	cout<<endl;
	r.toKelvin();
}
