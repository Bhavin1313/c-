/*4.>Build>a>C++>syste&>which>predict>a>total>profit>of>a>
Cashew>Co&pany>in>Goa.>If>this>co&pany>sells>1,23,500>
piece>of>cashews>in>1>&onth,>then>it>generates>total>of>
?.>78,000>in>a>&onth.>Help>this>co&pany>by>producing>10X>
&ore>cashews>in>3>&onths>and>display>total>revenue>with>
incre&ent>percentage.*/

#include <iostream>
using namespace std;

int main() {
    int pieces_sold = 123500;
    int revenue_per_month = 78000;
    int months = 3;
    int total_pieces_sold = pieces_sold * 10;
    int total_revenue = revenue_per_month * months * 10;
    float increase_percentage = (float)(total_revenue - (pieces_sold * revenue_per_month)) / (pieces_sold * revenue_per_month) * 100;

    cout << "If the company sells " << total_pieces_sold << " pieces of cashews in " << months << " months, the total revenue would be " << total_revenue << " rupees." << endl;
    cout << "The revenue increased by " << increase_percentage << "% compared to selling " << pieces_sold << " pieces of cashews in 1 month." << endl;

  
}

