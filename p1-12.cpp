/*12.a math teacher wnats to teach how to find simple interest.write a c++ program to provide
a soluion for this.
*/
#include <iostream>
using namespace std;

int main() {
    float amount, rate, time, interest;

    cout << "Enter the principal amount: ";
    cin >> amount;

    cout << "Enter the interest rate: ";
    cin >> rate;

    cout << "Enter the time period (in years): ";
    cin >> time;

    interest = (amount * rate * time) / 100;

    cout << "Simple interest = " << interest << endl;

}

