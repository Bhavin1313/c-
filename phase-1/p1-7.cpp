/*7.priyank needs to find an average of three numbers to gain required passing marks in exam.
write a c++ program to help priyank in his issue.*/
#include <iostream>
using namespace std;

int main() {

  int n1,n2,n3;
  float avg;
  float passing_marks = 35;

  cout << "Enter three numbers: ";
  cin >> n1 >> n2 >> n3;

  avg = (n1+n2+n3)/3;
  
  if(avg>=passing_marks) 
  {
    cout << "Congratulations, you passed with an average of " << avg << endl;
  }
  else 
  {
    cout << "Sorry, your average of " << avg << " is not enough to pass" << endl;
  }

}


