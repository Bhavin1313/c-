/*11. Build an Indian Regional Festival system in C++. User
can enter any date of current running year, and bases on
that date display which festival will be coming on that
date.*/

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    // Define the list of festivals and their dates
    map<string, string> festivals = {
        {"January 14", "Makar Sankranti"},
        {"January 26", "Republic Day"},
        {"March 11", "Maha Shivaratri"},
        {"March 29", "Holi"},
        {"April 2", "Good Friday"},
        {"April 14", "Ambedkar Jayanti"},
        {"April 14", "Baisakhi"},
        {"April 21", "Ram Navami"},
        {"April 29", "Mahavir Jayanti"},
        {"May 1", "May Day"},
        {"May 13", "Eid-ul-Fitr"},
        {"June 5", "World Environment Day"},
        {"August 15", "Independence Day"},
        {"August 19", "Muharram"},
        {"August 22", "Ganesh Chaturthi"},
        {"September 27", "World Tourism Day"},
        {"October 2", "Gandhi Jayanti"},
        {"October 7", "Dussehra"},
        {"October 15", "Diwali"},
        {"November 19", "Guru Nanak Jayanti"},
        {"December 25", "Christmas"}
    }

    // Prompt user for a date
    string date;
    cout << "Enter a date (in the format of Month Day, e.g. April 14): ";
    getline(cin, date);

    // Check if the date corresponds to a festival
    if (festivals.find(date) != festivals.end()) {
        cout << "The festival on " << date << " is " << festivals[date] << endl;
    } else {
        cout << "No festival found on " << date << endl;
    }

    return 0;
}

