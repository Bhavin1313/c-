/*24. Design a swapping program using only constructors for
helping Devansh to gain passing marks in examination.*/
#include <iostream>

using namespace std;

class Swapper {
private:
  int& var1;
  int& var2;

public:
  Swapper(int& v1, int& v2) : var1(v1), var2(v2) {}

  void swap() {
    int temp = var1;
    var1 = var2;
    var2 = temp;
  }
};

int main() {
  
  int a,b;
  cout<<"Enter A :- ";
  cin>>a;
  cout<<"Enter B :- ";
  cin>>b;


  Swapper s(a, b);

  
  cout << "Before swapping:" << endl;
  cout << "a = " << a <<endl;
  cout<< "b = " << b << endl;

  
  s.swap();

  
  cout << "After swapping:" << endl;
  cout << "a = " << a<<endl ;
  cout<<" b = " << b << endl;


}
