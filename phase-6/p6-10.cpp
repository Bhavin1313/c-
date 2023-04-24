/*10. Develop a C++ solution by which a user can add/
subtract/multiply/divide two Complex numbers with help of
Operator Overloading concept. In context of math, a
complex number contains two parts: a real part and an
imagenary part.*/

#include <iostream>
using namespace std;

class Complex{
  private:
    float real;
    float imag;
  
  public:
    Complex(float r = 0, float i = 0){
        real = r;
        imag = i;
    }
  
    Complex operator + (Complex const &obj) {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
  
    Complex operator - (Complex const &obj) {
        Complex res;
        res.real = real - obj.real;
        res.imag = imag - obj.imag;
        return res;
    }
  
    Complex operator * (Complex const &obj) {
        Complex res;
        res.real = real * obj.real - imag * obj.imag;
        res.imag = real * obj.imag + imag * obj.real;
        return res;
    }
  
    Complex operator / (Complex const &obj) {
        Complex res;
        float d = obj.real * obj.real + obj.imag * obj.imag;
        res.real = (real * obj.real + imag * obj.imag) / d;
        res.imag = (imag * obj.real - real * obj.imag) / d;
        return res;
    }

    void display(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
};

int main(){
    Complex c1(3, 2);
    Complex c2(1, 7);

    Complex sum = c1 + c2;
    Complex diff = c1 - c2;
    Complex prod = c1 * c2;
    Complex div = c1 / c2;

    cout<<"Sum = "; sum.display();
    cout<<"Difference = "; diff.display();
    cout<<"Product = "; prod.display();
    cout<<"Division = "; div.display();
   
}

