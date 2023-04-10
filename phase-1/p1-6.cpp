/*6.an IT company wants to generate random number of 6 digits long and send it to its 
employee.write c++ program to help IT company.	 */
#include <iostream>
#include <cstdlib> 
using namespace std;

main(){

  
  srand(static_cast<unsigned int>(time(0));

  int rand_num = (rand() % 900000) + 100000;


  cout << "The random 6-digit number is: " << rand_num << endl;

}

