/*20.a teacher given a punishment to all students find reverse number of given 3 random numbers
by logically under 15 minutes.write a c++ program to provide solution for this problem.
*/
#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;

    cout << "Enter three random three-digit numbers: ";
    cin >> n1 >> n2 >> n3;

    cout << "Reverse of " << n1 << " is " << ((n1%10)*100) + ((n1/10)%10)*10 + (n1/100) << endl;
    cout << "Reverse of " << n2 << " is " << ((n2%10)*100) + ((n2/10)%10)*10 + (n2/100) << endl;
    cout << "Reverse of " << n3 << " is " << ((n3%10)*100) + ((n3/10)%10)*10 + (n3/100) << endl;

}

