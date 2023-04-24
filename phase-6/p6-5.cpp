/*5. The two short sides of a right triangle are 6 cm and
13 cm. Find the length of the third side using Pythagoras
Theorem with help of C++.*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int side1 = 6;
    int side2 = 13;
    int side3;

    side3 = sqrt(side1 * side1 + side2 * side2);

    cout << "The length of the third side of the right triangle is " << side3 << " cm." << endl;

    return 0;
}
