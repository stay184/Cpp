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

Rectangle get_values()
{
    int width, height;
    cout << "Insert width and height (separated by spaces): ";
    cin >> width >> height;

    Rectangle rect; // Create a Rectangle object
    rect.set_values(width, height); // Set the values for the object
    return rect; // Return the object
}

//main function
int main ()
{
    Rectangle rect = get_values();
    cout << "area: " << rect.area() << endl;

    return 0;
}
