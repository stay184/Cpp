#include <iostream>

using namespace std;

class Circle
{
    double radius;

public:
    Circle(double r):radius(r){} //constructor

    double area() //method returns area
    {
        return radius*radius*3.14159265;
    }
};

class Cylinder
{
    Circle base;
    double height;

public:
    Cylinder (double r, double h): base (r), height(h){} //constructor

    double volume() //method returns volume
    {
        return base.area()*height;
    }
};

//main function
int main()
{
    Cylinder cyn(10, 20); //create object

    //display volume
    cout << "cyn's volume: " << cyn.volume() << endl;

    return 0;
}
