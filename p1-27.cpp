/*27.create a addition logic to find sum of all digits of a given number to surpass a very 
challanging dream of tanmay.write a c++ program to develop this system for tanmay.
*/
#include <iostream>
using namespace std;

int main()
{
    int n,sum=0,remainder;
    
    cout << "Enter a number: ";
    cin >> n;
    
    while (n!=0) {
        remainder=n%10;
        sum+=remainder;
        n/=10;
    }
    
    cout << "The sum of the digits is: " << sum;
    
}

