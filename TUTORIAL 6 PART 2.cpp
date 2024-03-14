//Virtual Function, Pure Virtual Functions and Abstract Classes in CPP
//CodeBeauty OOP Tutorial 6 Part 2

//abstract class
//class has atleast one pure virtual function

#include <iostream>

using namespace std;

class Instrument //abstract class
{
public:
    virtual void MakeSound() = 0; //pure virtual function //forces all derived to implement it
};

class Accordion:public Instrument //derived class (inheritance)
{
public:
    void MakeSound()
    {
        cout << "Accordion playing..." << endl;
    }
};

class Piano:public Instrument //derived class (inheritance)
{
public:
    void MakeSound()
    {
        cout << "Piano playing..." << endl;
    }
};

int main()
{
    Instrument *i1 = new Accordion(); //pointer to derived
    Instrument *i2 = new Piano();
    i1->MakeSound(); //pointer uses -> //most derived will be executed
    i2->MakeSound();

    return 0;
}
