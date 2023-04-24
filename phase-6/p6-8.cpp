/*8. A 15 m fire-fighter’s ladder is leaning against the
wall. If the ground distance between the foot of the
ladder and the wall is 7 m, what is the wall’s height?*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double ladder = 15; 
    double ground = 7; 
    double wall;

    wall = sqrt(ladder*ladder - ground*ground);

    cout << "The height of the wall is " << wall << " meters." << endl;

    return 0;
}
