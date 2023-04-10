/*10.A brand new smart device which meant to convert total provided days into years,weeks and days.
but for some technical interruption,that device stops working properly.write a c++ program to provide
solution for this.
*/
#include <iostream>
using namespace std;

main() {

  int total_days, years, weeks, days;

  cout << "Enter total number of days: ";
  cin >> total_days;

  years = total_days / 365;
  total_days %= 365;

  weeks = total_days / 7;
  total_days %= 7;

  days = total_days;

  cout << years << " years, " << weeks << " weeks, and " << days << " days" << endl;

}

