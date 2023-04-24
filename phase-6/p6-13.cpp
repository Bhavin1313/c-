/*13. Build a Counter App in C++ using OOP concept.
Initially the counter meant to be set as a value 0 using
constructor. By pressing UP Arrow from keyboard, counter
will be increment and by pressing DOWN Arrow, counter
will be decrement. You can use ASCII value concept by
achieving this type of functionality at the execution
time of a Program.*/

#include <iostream>
#include <conio.h>  //for getch() and kbhit()

using namespace std;

class Counter {
    private:
        int count;
    public:
        Counter() {
            count = 0;
        }
        void increment() {
            count++;
        }
        void decrement() {
            count--;
        }
        void display() {
            cout << "Counter value: " << count << endl;
        }
};

int main() {
    Counter c;

    char ch;
    do {
        if (kbhit()) {  //check if a key is pressed
            ch = getch();
            if (ch == 72) {  //ASCII value for UP arrow
                c.increment();
                c.display();
            }
            else if (ch == 80) {  //ASCII value for DOWN arrow
                c.decrement();
                c.display();
            }
        }
    } while (ch != 27);  //ASCII value for ESC key

    return 0;
}

