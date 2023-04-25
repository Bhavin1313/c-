/*18. Help Ayush to perfom given operation:
a. Assume any number
b. Add 8 in that number
c. Multiply it with 3
d. Subtract 12 from it
e. Add another 5 into that
f. Add your birth year in it
g. Subtract current year from that
Finally display which number he get after perfrming all
above mentioned operations and find is it divisible by 7
or not.*/

#include <iostream>
using namespace std;

int main() {
  int num;
  cout<<"Enter any number :- ";
  cin>>num;	
  
  num += 8;

  
  num *= 3;

 
  num -= 12;

  
  num += 5;


  int birth_year;
  cout<<"Enter your birth year :- ";
  cin>>birth_year;
  num += birth_year;

  int c_year;
  cout<<"Enter current year :- ";
  cin>>c_year;
  num -= c_year;

  
  cout << "The final number is: " << num << endl;

  
  if (num % 7 == 0) {
    cout << "The final number is divisible by 7." << endl;
  } else {
    cout << "The final number is not divisible by 7." << endl;
  }

 
}
