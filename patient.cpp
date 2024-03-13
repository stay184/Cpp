#include <iostream>

using namespace std;

//class declaration
class patient
{
    int bloodpressure;

public:
    void setBP(int enter_value);
    int getBP();
};

//class implementation
void patient::setBP(int inputvalue)
{
    bloodpressure = inputvalue;
}

int patient::getBP()
{
    return bloodpressure;
}

//main function
int main()
{
    patient pepe, nacho, ronaldo; //three object instantiated
    int normalBP; //a normal value

    pepe.setBP(170);
    nacho.setBP(121);
    ronaldo.setBP(135);
    normalBP = 130;

    //pepe.bloodpressure = 150;
    //nacho.bloodpressure = 128;

    cout << "Accessing data using class" << endl;
    cout << "--------------------------" << endl;
    cout << "Pepe's blood pressure is " << pepe.getBP() << endl;
    cout << "Nacho's blood pressure is " << nacho.getBP() << endl;
    cout << "Ronaldo's blood pressure is " << ronaldo.getBP() << endl << endl;

    cout << "Accessing data normally" << endl;
    cout << "-----------------------" << endl;
    cout << "Normal blood pressure is " << normalBP << endl;
    return 0;
}
