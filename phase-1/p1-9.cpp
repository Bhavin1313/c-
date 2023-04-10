/*9.an innocent boy must have to solve that how to raise any number(Base) to power N for
proving his common ability among all classmate.write a c++ program to provide solution to boy.		 
*/
#include <iostream>
using namespace std;

main() {
  
  int a,b,i;
  int N = 1;

  cout << "Enter the A: ";
  cin >> a;

  cout << "Enter the B: ";
  cin >> b;

  for(i=0;i<b;i++) 
  {
    N*=a;
  }

  cout << a << " raised to the power " << b << " is " << N << endl;

}

