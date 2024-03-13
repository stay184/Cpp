#include <iostream>

using namespace std;

int main ()
{
    int counter, number;
    float value, total;

    cout << "Enter numbers of resistor: ";
    cin >> number;

    for (counter = 1; counter <= number; counter++)
    {
        cout << "Resistor " << counter << " (ohm): ";
        cin >> value;
        total += value;
    }

    cout << "Sum of resistor value is " << total << " ohm." << endl;
}

