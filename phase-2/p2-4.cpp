/*4. Write a C++ Program which finds the area of triangle
whose base is 56 units and height is 21 units. Also print
sum of all digits of that area of triangle.*/
#include <iostream>
using namespace std;

main() {
    int base = 56;
    int height = 21;
    int area = (base * height) / 2;
    cout << "The area of the triangle is: " << area << endl;

    int sum = 0;
    while (area > 0) {
        sum += area % 10;
        area /= 10;
    }
    cout << "The sum of all the digits in the area is: " << sum << endl;

}
