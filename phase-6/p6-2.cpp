/*2.>A>Business&an>was>bankrupted>in>a>Sca&>with>a>&ini&al>
a&ount>left>in>a>bank>of>?.>18,000.>After>so&e>&onths>of>
hardwork,>he>earned>external>a&ount>of>?.>1,20,000.>Now>
he>&ight>be>goes>to>the>bank>and>do>a>deposit>or>withdraw>
so&e>&oney>as>he>wants.>Prepare>a>C++>solution>for>this>
scenario>with>all>required>validations>and>criterias.*/
#include <iostream>
using namespace std;

int main() {
    int balance = 18000;
    
    int n;
    int amount;

    cout << "Your current balance is: " << balance << endl;
    cout << "What would you like to do?" << endl;
    cout << "1. Deposit" << endl;
    cout << "2. Withdraw" << endl;
    cin >> n;

    switch (n) {
        case 1:
            cout << "Enter the amount you want to deposit: ";
            cin >> amount;
            balance += amount;
            break;

        case 2:
            cout << "Enter the amount you want to withdraw: ";
            cin >> amount;
            balance -= amount;
            break;

        default:
            cout << "Invalid choice" << endl;
           
    }
    cout << "Your updated balance is: " << balance << endl;
}

