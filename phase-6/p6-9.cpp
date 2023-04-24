/*9. Design a GST Calculator in C++ to find total TAX on
various types of categorized items. Apply proper types of
Indian GST TAX varients based on different types of
Goods. GST have been divided into four GST rates – 5%,
12%, 18%, and 28% by the GST Council.*/

#include <iostream>
using namespace std;

int main() {
    double amount; 
    double gst; 
    double total; 
    int category;
    int rate; 

    cout << "Enter the amount of item: ";
    cin >> amount;
    cout << "Enter the category of item (1-5): ";
    cin >> category;

  
    switch (category) {
        case 1:
            rate = 5;
            break;
        case 2:
            rate = 12;
            break;
        case 3:
            rate = 18;
            break;
        case 4:
            rate = 28;
            break;
        case 5:
            rate = 0;
            break;
        default:
            cout << "Invalid category!" << endl;
            return 1;
    }


    gst = amount * rate / 100;
    total = amount + gst;

    cout << "GST rate: " << rate << "%" << endl;
    cout << "GST amount: " << gst << endl;
    cout << "Total amount: " << total << endl;

    return 0;
}

