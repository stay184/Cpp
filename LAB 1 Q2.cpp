#include <iostream>

using namespace std;

int main ()
{
    //initialize variables
    string name;
    int age, number;

    //user input name, age and number
    cout << "Please enter your name: ";
    cin >> name;

    cout << "Please enter your age: ";
    cin >> age;

    cout << "Please enter your mobile number: ";
    cin >> number;

    //display
    cout << "--------------------" << endl;
    cout << "Here is your detail:" << endl;
    cout << "Name: " << name << endl
    cout << "Age: " << age << endl;
    cout << "Mobile Number: " << number << endl;

    return 0;
}
