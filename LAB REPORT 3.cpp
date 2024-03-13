//program struct.cpp
#include <iostream>

using namespace std;

struct patient //struct data type
{
    int bloodpressure;
};

int main()
{
    patient pepe, nacho, ronaldo;
    int normalBP; //a normal variable

    pepe.bloodpressure = 170; //assigning values
    nacho.bloodpressure = 121;
    ronaldo.bloodpressure = 135;
    normalBP = 130;

    //displaying data
    cout << "Pepe's blood pressure is " << pepe.bloodpressure << endl;
    cout << "Nacho's blood pressure is " << nacho.bloodpressure << endl;
    cout << "Ronaldo's blood pressure is " << ronaldo.bloodpressure << endl;
    cout << "Normal blood pressure is " << normalBP << endl;

    return 0;
}
