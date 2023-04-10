/*22.write a c++ program to find fibonacci series upto N numbers to help darshan by passing 
fastest-finger first round for entering coding QUiz competition.
*/
#include <iostream>
using namespace std;

int main()
{
    int N,a=0,b=1,c;
    int i;
    
    cout << "Enter the number of terms you want to print: ";
    cin >> N;
    
    cout << "Fibonacci Series up to " << N << " terms: ";
    
    if (N == 1)
        cout<<a;
    else if (N == 2)
        cout<<a<<" "<<b;
    else
    {
        cout<<a<<" "<<b<<" ";
        for (i=3;i<=N;i++)
        {
            c=a+b;
            cout<<c<<" ";
            a=b;
            b=c;
        }
    }
    
}

