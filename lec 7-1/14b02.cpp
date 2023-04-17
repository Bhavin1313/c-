/*2. WAP to implement method overriding by following
below mentioned criteria:
- Class Cricket -> Class T20Match
- Class Cricket -> Class TestMatch
- override getTotalOvers() method in both classes*/

#include<iostream>
using namespace std;

class Cricket{
	protected :
	int n=20,m=90;
	
	public :
		void getTotalOvers(){
			cout<<"Cricket is a satta bazarr "<<endl;
		}
	
};

class T20Match : public Cricket{
	public :
	void getTotalOvers()
		{
			cout<<"t20 match over :- "<<n<<endl;
		}
};

class TestMatch : public T20Match{
	public :

		void getTotalOvers()
		{
			cout<<"Test match over :- "<<m<<endl;
		}
};

int main()
{
	TestMatch t;
	t.Cricket::getTotalOvers();
	t.T20Match::getTotalOvers();
	t.getTotalOvers();
	
		
}
