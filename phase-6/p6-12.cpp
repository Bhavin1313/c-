/*12. Prince wants to create a 24 Hr time convertor app in
C++. In this app, user can provide any 24 Hr time he/she
wants but output must be produced in 12 Hr format.
For example,
i/p: 15 Hr, 32 Minutes
o/p: 3:32 PM*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int hour, minute;
    cout << "Enter 24 hour time (hh:mm): ";
    cin >> hour >> minute;
    
    if (hour > 12) {
        hour -= 12;
        cout << "Time in 12 hour format: " << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << " PM" << endl;
    } else {
        cout << "Time in 12 hour format: " << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << " AM" << endl;
    }

    return 0;
}

