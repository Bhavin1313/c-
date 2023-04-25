/*16. Find Volume of a Box using Parameterized Constructor
and figure out if that is odd or even number.*/

#include <iostream>

using namespace std;

class Box {
  private:
    int length;
    int width;
    int height;

  public:
   
    Box(int l, int w, int h) {
      length = l;
      width = w;
      height = h;
    }

   
    int volume() {
      return length * width * height;
    }

  
    void oddOrEvenVolume() {
      int vol = volume();
      if (vol % 2 == 0) {
        cout << "The volume is even." << endl;
      } else {
        cout << "The volume is odd." << endl;
      }
    }
};

int main() {
  int l,w,h;
  cout<<"Enter leanth of box :- ";
  cin>>l;
  cout<<"Enter withe of box :- ";
  cin>>w;
  cout<<"Enter hight of box :- ";
  cin>>h;
  Box box(l,w,h);

  
  int vol = box.volume();
  cout << "The volume of the box is: " << vol << endl;


  box.oddOrEvenVolume();


}
