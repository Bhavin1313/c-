/*14. Calculate an Electricity Bill of a House of one month
based on total units burned. Develop a C++ solution for
this calculation.*/
#include <iostream>
using namespace std;

int main()
{
    int units;
    float bill_amount;

    cout << "Enter the total number of units consumed: ";
    cin >> units;

    if(units <= 100)
    {
        bill_amount = units * 3;
    }
    else if(units > 100 && units <= 300)
    {
        bill_amount = 100 * 3 + (units - 100) * 5;
    }
    else if(units > 300 && units <= 500)
    {
        bill_amount = 100 * 3 + 200 * 5 + (units - 300) * 7;
    }
    else
    {
        bill_amount = 100 * 3 + 200 * 5 + 200 * 7 + (units - 500) * 10;
    }

    cout << "Electricity Bill = Rs. " << bill_amount;

    return 0;
}

