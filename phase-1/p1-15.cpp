/*15.aaryan is constantly trying to check wheather a character is vowel or consonant,but for
some unknown reason he just cannot remember difference vowel or consonant.write a c++ program 
to provide a better solution to aaryan. 
*/
#include <iostream>
using namespace std;

main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
       ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        cout << ch << " is a vowel\n";
    
    else
        cout << ch << " is a consonant\n";

}

