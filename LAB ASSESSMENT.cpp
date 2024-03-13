//LAB ASSESSMENT

#include <iostream>
#include <cmath>

#define PI 3.142

using namespace std;

float calculateSurface(float); //function prototype
float calculateVolume(float);

int main ()
{
    float radius, area, volume;

    //user input radius
    cout << "Insert radius: ";
    cin >> radius;

    //function call
    area = calculateSurface(radius);
    volume = calculateVolume(radius);

    //display output
    cout << "Area of sphere: " << area << endl;
    cout << "Volume of sphere: " << volume << endl;

    return 0;
}

//function definition
float calculateSurface (float Radius)
{
    return (4 * PI * pow(Radius, 2));
}

float calculateVolume (float Radius)
{
    return (PI * pow(Radius, 3) * 4/3);
}
