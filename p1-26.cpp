/*26.develop a simple comparision system which identify if given number is palindrom or not.
by this system,a bank employee will appreciate your help.write a c++ program for developing this 
system.
*/
#include <iostream>
using namespace std;

int main()
{
    int n, originalNum, reverseNum = 0, remainder;
    
    cout << "Enter a number: ";
    cin >> n;
    
    originalNum = n;
    

    while (n!=0) {
        remainder=n%10;
        reverseNum=reverseNum*10+remainder;
        n/=10;
    }
    
    if (originalNum == reverseNum) {
        cout << "The number is a palindrome.";
    } else {
        cout << "The number is not a palindrome.";
    }
    
}

