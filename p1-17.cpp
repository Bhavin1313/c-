/*17.sameer needs to master a technique to find if a given number is prime or not for his
best presentation at the teachers day to impress his matj teacher.help sameer to write a 
c++ program with best technique. 
*/
#include <iostream>
using namespace std;

int main() {
    int n,i,flag=0;

    cout << "Enter a number: ";
    cin >> n;

    for(i=2;i<=n/2;i++) {
        if(n%i == 0) 
		{
            flag=1;
            break;
        }
    }

    if(flag == 0)
        cout << n << " is prime\n";
    else
        cout << n << " is not prime\n";

    
}

