/*14.gaurav must have to teach his 5 years old baby to check whether given year is leap or not.
write a c++ program to provide solution for gaurav.
*/
#include <iostream>
using namespace std;
 
main() {
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if(year%4==0)
        cout << year << " is a leap year\n";
    else
        cout << year << " is not a leap year\n";

}

