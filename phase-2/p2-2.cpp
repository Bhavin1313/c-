/*2. A Math problem to find average of all even numbers
from n Natural numbers raise difficulty to all 5th
standard students. Write a C++ Program to help them.*/
#include <iostream>

using namespace std;

int main() {
    int n,i;
    int sum = 0;
    int count = 0,average;

    cout << "Enter the value of n : ";
    cin >> n;
    
    int a[n];

    for (i=1;i<=n;i++) {
        cout<<"Enter your number :- ";
        cin>>a[i];
    }
    
    for (i=1;i<=n;i++)
	{
        if (a[i]%2==0) {
            sum += a[i];
            count++;
        }
    }
    cout<<"Sum of all evan number :- "<<sum<<endl;
    cout<<"Totle evan number is :- "<<count<<endl;
    cout<<"\nAverage of all even numbers is :- "<<sum/count;
    
}
