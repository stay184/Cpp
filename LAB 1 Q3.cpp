#include <iostream>

using namespace std;

int main ()
{
    //initialize variables
    int int1, int2;
    float float1, float2;

    cout << "Program to sum 4 number." << endl;

    //input from user
    cout << "Please enter first integer: ";
    cin >> int1;

    cout << "Please enter second integer: ";
    cin >> int2;

    cout << "Please enter first floating number: ";
    cin >> float1;

    cout << "Please enter second floating number: ";
    cin >> float2;

    //display sum
    cout << "The sum of the number is: " << int1 + int2 + float1 + float2 << endl;
}
