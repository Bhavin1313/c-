/*16.two friends are playing a game in which they have to check wheather a given number is
even or odd.write c++ progeam to help them.
*/
#include <iostream>
using namespace std;

main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if(n % 2 == 0)
        cout << n << " is even\n";
    else
        cout << n << " is odd\n";

}

