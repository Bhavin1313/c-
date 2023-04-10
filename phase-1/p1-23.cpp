/*23.by writing a ;ogic for checking if a given number is  armstrong or not,mayur will be 
qualified for an entrance exam.write a c++ program for helping mayur.
*/
#include <iostream>
using namespace std;

int main()
{
    int n,a,sum = 0,digit,temp,numDigits = 0;
    
    cout << "Enter a number: ";
    cin >> n;
    
    temp = n;
    
    while (temp != 0) {
        numDigits++;
        temp /= 10;
    }
    
    temp = n;
    
    while (temp != 0) {
        digit = temp % 10;
        sum +=(digit, numDigits);
        temp /= 10;
    }
    
    if (sum == n)
        cout << n << " is an Armstrong number.";
    else
        cout << n << " is not an Armstrong number.";
    
}

