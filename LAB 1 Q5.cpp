#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    int counter, account_number, months;
    float value, total, average;
    string usage;

    cout << fixed << showpoint << setprecision(2); //for two decimal points

    cout << "***T&B care-system***" << endl;
    cout << "Please enter the bill account number: ";
    cin >> account_number;

    cout << "Please enter number of months: ";
    cin >> months;

    for (counter = 1; counter <= months; counter++)
    {
        cout << "Please enter amount for month " << counter << " (RM): ";
        cin >> value;
        total += value;
    }

    average = total / months;

    if (average <= 39.99)
        usage = "LOW";
    else if (average <= 109.99)
        usage = "MEDIUM";
    else
        usage = "HIGH";


    cout << "--------------------------------------" << endl;
    cout << "Account number: " << account_number << endl;
    cout << "Sum bill for " << months << " month: RM" << total << endl;
    cout << "The average of bills charge: RM " << average << endl;
    cout << "Your electricity usage is " << usage << endl;
}

