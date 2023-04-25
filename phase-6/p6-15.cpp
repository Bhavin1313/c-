/*15. Calculate toal coast to apply a Solar Powered Panels
for your Home Rooftop. Apply all types of government aid
percentage to find reasonable coast.*/

#include <iostream>

using namespace std;

int main() {
 
  float total_cost, solar_panel_cost, installation_cost;
  cout << "Enter the cost of solar panels: ";
  cin >> solar_panel_cost;
  cout << "Enter the installation cost: ";
  cin >> installation_cost;


  float federal_aid_percentage, state_aid_percentage;
  cout << "Enter the percentage of federal aid: ";
  cin >> federal_aid_percentage;
  cout << "Enter the percentage of state aid: ";
  cin >> state_aid_percentage;

  
  float federal_aid = solar_panel_cost * (federal_aid_percentage / 100);
  float state_aid = solar_panel_cost * (state_aid_percentage / 100);
  total_cost = solar_panel_cost + installation_cost - federal_aid - state_aid;

 
  cout << "The total cost of installing solar panels is: rs" << total_cost << endl;


}
