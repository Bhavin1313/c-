/*27. Reserve Bank of India pre-defines a Rate of Interest
(ROI) for all banks across the Nation. But some private
sector banks can apply different ROI. Use inheritance and
polymorphism concept to illustrate this scenario.*/
#include <iostream>
using namespace std;


class Bank {
protected:
    float roi;
public:
    Bank(float r) {
        roi = r;
    }
    virtual float getROI() {
        return roi;
    }
};


class PrivateBank : public Bank {
public:
    PrivateBank(float r) : Bank(r) {}

    float getROI() {
        return roi + 1.0;
    }
};

 main() {
    Bank* b1 = new Bank(5.0);
    PrivateBank* b2 = new PrivateBank(5.0);

    cout << "Public sector bank ROI: " << b1->getROI() << "%" << endl;
    cout << "Private sector bank ROI: " << b2->getROI() << "%" << endl;


}

