/*8.a sport coach needs to convert submitted parcipant's inches into feet and inches for height 
measurement.write a c++ program to provide solution for this.*/
#include <iostream>
using namespace std;

int main() {

  int inches,feet=0,remaining_inches;

  cout << "Enter height in inches: ";
  cin >> inches;

		while (inches>=12)
		{
			inches-=12;
			feet++;
		}
		cout << "Feet : " << feet << endl << "Inch : " << inches;

}

