// 2. WAP to add two distances using binary plus (+) operator overloading.


#include<iostream>

using namespace std;

class distances
{
    int d;

    public :

    input(){

        cout<<"Enter the distance in Kilometer : "; cin>>d ;

    }

   	distances operator + (distances e)
    {
        cout<<"The sum of the distance is : "<<d+e.d<<" km";
    }

};

main()

{
    distances a;
    distances b;
    distances c;
    a.input();
    b.input();
    c=a+b;
}
