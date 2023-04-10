/*21.priya wants to teach his newly enrolled boy that how to find number of digits in any 
number.write a c++ program to provide solution for this problem. 
*/
#include <iostream>
using namespace std;

int main() {
    int n,count=0;

    cout << "Enter a number: ";
    cin >> n;

    while(n!=0) 
	{
        n/=10;
        count++;
    }

    cout << "Number of digits in the input number = " << count;

}

