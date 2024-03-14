//Virtual Function, Pure Virtual Functions and Abstract Classes in CPP
//CodeBeauty OOP Tutorial 6 Part 3

#include <iostream>

using namespace std;

class Instrument //abstract class
{
public:
    virtual void MakeSound() = 0; //pure virtual function
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
    //i1->MakeSound();
    Instrument *i2 = new Piano();
    //i2->MakeSound();

    Instrument *instruments[2] = { i1, i2 };
    for (int i=0; i<2; i++)
    {
        instruments[i]->MakeSound();
    }

    return 0;
}
