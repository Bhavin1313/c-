/*3.>An>Auction>is>helding>at>Arizona>for>selling>an>old>
haunted>house.>For>the>reason,>this>is>a>haunted>house,>
only>three>gigantic>co&panies>took>a>part>in>this>
Auction.>Sell>this>haunted>house>to>the>highest>bidder>
with>count>of>three.>Use>C++>with>all>required>criteria>
to>build>this>type>of>Auction>Syste&.*/
#include <iostream>
using namespace std;

int main() {
    string company1 = "Company A";
    string company2 = "Company B";
    string company3 = "Company C";
    int bid1, bid2, bid3;

    cout << "Welcome to the haunted house auction!" << endl;
    cout << "Please enter your bid for " << company1 << ": ";
    cin >> bid1;
    cout << "Please enter your bid for " << company2 << ": ";
    cin >> bid2;
    cout << "Please enter your bid for " << company3 << ": ";
    cin >> bid3;

    if (bid1 > bid2 && bid1 > bid3) {
        cout << "Congratulations " << company1 <<"!"<<endl;
		cout<< "You have won the haunted house with a bid of " << bid1 << endl;
    } else if (bid2 > bid1 && bid2 > bid3) {
        cout << "Congratulations " << company2 <<"!"<<endl;
		cout<< "You have won the haunted house with a bid of " << bid2 << endl;
    } else if (bid3 > bid1 && bid3 > bid2) {
        cout << "Congratulations " << company3 <<"!"<<endl;
		cout<< "You have won the haunted house with a bid of " << bid3 << endl;
    } else {
        cout << "No winner. Please try again with higher bids!" << endl;
    }

    return 0;
}








