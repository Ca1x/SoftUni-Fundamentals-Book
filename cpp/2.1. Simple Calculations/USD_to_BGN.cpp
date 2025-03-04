/*
Task: console converter - USD to BGN

Write a program to convert US dollars (USD)
into Bulgarian leva (BGN). Round the result to 2 digits after the decimal point.
Use a fixed rate between dollar and lev: 1 USD = 1.79549 BGN.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(2);
    double USD;
    cout << "Enter USD: " << endl;
    cin >> USD;

    cout << USD * 1.79549 << " BGN";
}