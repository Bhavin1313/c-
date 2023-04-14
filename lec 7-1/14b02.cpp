/*2. WAP to implement method overriding by following
below mentioned criteria:
- Class Cricket -> Class T20Match
- Class Cricket -> Class TestMatch
- override getTotalOvers() method in both classes*/

#include<iostream>
using namespace std;

class Cricket{
	protected :
	int n,m;
	
	public :
		void getTotalOvers(){
			
			cout<<"Enter number of t20 over : ";
			cin>>n;
			cout<<"Enter number of test over : ";
			cin>>m;
		}
	
};

class T20Match : public Cricket{
	protected :
		int n=20;
	public :
	void getTotalOvers()
		{
			cout<<"t20 match over :- "<<n<<endl;
		}
};

class TestMatch : public Cricket{
	protected :
	int	m=90;
	public :

		void getTotalOvers()
		{
			cout<<"Test match over :- "<<m<<endl;
		}
};

int main()
{
	T20Match t1;
	TestMatch t2;
	t1.Cricket::getTotalOvers();
	t1.getTotalOvers();
	t2.getTotalOvers();
	
		
}
