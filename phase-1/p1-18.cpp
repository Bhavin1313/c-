/*18.tushar is trying very hard to teach his classnate harsh that how to find factorial of a
number.write c++ program for tushar with best possible technique.
*/
#include <iostream>
using namespace std;

int main() {
    int n,i;
    int fact=1;

    cout << "Enter a number: ";
    cin >> n;

    for(i=1;i<=n;i++) 
	{
        fact*=i;
    }

    cout << "Factorial of " << n << " = " << fact << endl;

}

