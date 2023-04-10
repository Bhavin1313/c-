/*5.two college collegue had argue with ASCII value conversion method.write a c++
program which provides solution for their issue.*/
#include <iostream>
using namespace std;

int main() {

  char c;
  int ascii_value;

  cout << "Enter a character: ";
  cin >> c;

  ascii_value = static_cast<int>(c);

  cout << "The ASCII value of " << c << " is " << ascii_value << endl;

}

