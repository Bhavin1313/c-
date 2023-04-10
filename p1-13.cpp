/*13.a fourth standard sudent forced by his teacher to dentify if given character is uppercase,
lowercase,digit or special character.write a c++ program to help student.
*/
#include <iostream>
using namespace std;

int main() {
    char c;

    cout << "Enter a character: ";
    cin >> c;

    if(c >= 'A' && c <= 'Z')
        cout << "Uppercase character\n";
    
    else if(c >= 'a' && c <= 'z')
        cout << "Lowercase character\n";
    
    else if(c >= '0' && c <= '9')
        cout << "Digit\n";
    
    else
        cout << "Special character\n";

}

