/*23. Jemin wants to create an automate system which
compare two given strings and it returns 1 if both
strings are same and 0 otherwise. Create a C++ system for
helping Jemin using overloading concept.*/

#include <iostream>
using namespace std;

class StringComparer {
private:
  string str1;
  string str2;
public:
  StringComparer(string s1, string s2) {
    str1 = s1;
    str2 = s2;
  }

  bool operator== (const StringComparer& sc) {
    return (str1 == sc.str1 && str2 == sc.str2);
  }
};

int main() {

  string s1 = "Hello";
  string s2 = "World";


  StringComparer sc1(s1, s2);

 
  if (sc1 == StringComparer("Hello", "World")) {
    cout << "The strings are the same." << endl;
  } else {
    cout << "The strings are not the same." << endl;
  }

  return 0;
}

