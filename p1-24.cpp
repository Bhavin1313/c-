/*24.by writing a logic for checking if a given string is palindrom or not,apexa will be
qualified for an entrance exam.write a c++ program for apexa to qualify.
*/
#include <iostream>
using namespace std;

int main()
{
    char a[100];
    int flag=0;
    
    cout << "Enter a string: ";
    cin>>a;
    
    int len=0;
    
    while (a[len] != '\0')
	{
        len++;
    }
    
    for (int i=0;i<len/2;i++) {
        if (a[i] != a[len-i- 1])
		 {
            flag=1;
            break;
        }
    }
    
    if (flag==0)
        cout << "The string is a palindrome.";
    else
        cout << "The string is not a palindrome.";
    
}

