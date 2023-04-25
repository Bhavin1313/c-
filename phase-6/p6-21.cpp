/*21. Build a C++ solution which returns array of all ASCII
values of alphabets skipping 3 characters. Use concept of
Constructors. After returning that array, find addition
of that values and decide whether it is a odd or even
number.*/
#include <iostream>
#include <vector>

using namespace std;

class AsciiSkipper {
private:
  vector<int> ascii_values;
public:
  AsciiSkipper() {
    // Initialize the vector with the ASCII values for A-Z
    for (int i = 'A'; i <= 'Z'; i++) {
      // Skip every third character
      if ((i - 'A') % 3 != 0) {
        ascii_values.push_back(i);
      }
    }
  }

  vector<int> getAsciiValues() {
    return ascii_values;
  }
};

int main() {
  // Create a new AsciiSkipper object
  AsciiSkipper asciiSkipper;

  // Get the array of ASCII values
  vector<int> ascii_values = asciiSkipper.getAsciiValues();

  // Calculate the sum of the ASCII values
  int sum = 0;
  for (int i = 0; i < ascii_values.size(); i++) {
    sum += ascii_values[i];
  }

  // Determine whether the sum is odd or even
  if (sum % 2 == 0) {
    cout << "The sum of the ASCII values is even." << endl;
  } else {
    cout << "The sum of the ASCII values is odd." << endl;
  }

  return 0;
}
