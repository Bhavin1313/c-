/*7. Build a C++ system which helps a Mathematician to
figure out the type of a Triangle. Bases on Pythagoras’
theorem, find out if a triangle is: obtuse, right or
acute.*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int rope_length = 26;
    int tree_height = 13;
    int distance_from_tree;

    distance_from_tree = sqrt(rope_length * rope_length - tree_height * tree_height);

    cout << "The distance between the tree and the end of the rope on the ground is " << distance_from_tree << " m." << endl;

    return 0;
}

