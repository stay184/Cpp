#include <iostream>

using namespace std;

class Rectangle
{
    int width; //declare variable
    int height;

public:
    void set_values(int, int); //function declaration
    int area();
};

//function definition
void Rectangle::set_values(int x, int y)
{
    width = x;
    height = y;
}

int Rectangle::area()
{
    return width*height;
}

//main function
int main ()
{
    Rectangle rect; //object
    Rectangle rect1; //question 2
    rect.set_values(5,7);
    rect1.set_values(10,10); //question 2
    cout << "area: " << rect.area() << endl;
    cout << "area: " << rect1.area() << endl; //question 2

    return 0;
}
