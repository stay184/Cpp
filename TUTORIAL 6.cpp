//Virtual Function, Pure Virtual Functions and Abstract Classes in CPP
//CodeBeauty OOP Tutorial 6

//virtual function
//defined in base
//redefined in derived
//runtime polymorphism

#include <iostream>

using namespace std;

class Instrument
{
public:
    virtual void MakeSound() //execute derived if exist
    {
        cout << "Instrument playing..." << endl;
    }
};

class Accordion:public Instrument //derived class (inheritance)
{
public:
    void MakeSound()
    {
        cout << "Accordion playing..." << endl;
    }
};

int main()
{
    Instrument *i1 = new Accordion(); //pointer to derived
    i1->MakeSound(); //most derived will be executed //pointer uses ->

    return 0;
}
