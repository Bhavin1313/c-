/*25.by using an easy technique ,write a c++ program to find largest among four numbers to
help prisha to boost her confidence in logical building process.
*/
#include <iostream>
using namespace std;

int main()
{
    int n1,n2,n3,n4;
    int largest;
    
    cout << "Enter four numbers: ";
    cin >> n1 >> n2 >> n3 >> n4;
    
    largest = n1;
    if (n2 > largest) {
        largest = n2;
    }
    if (n3 > largest) {
        largest = n3;
    }
    if (n4 > largest) {
        largest = n4;
    }
    
    cout << "The largest number is: " << largest;
    
}

