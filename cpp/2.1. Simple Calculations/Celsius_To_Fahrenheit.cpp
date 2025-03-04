/*
Task: console converter - from degrees °C to degrees °F

Write a program that reads degrees on the Celsius scale (°C)
and converts them to degrees on the Fahrenheit (F) scale.
Find the Internet for an appropriate formula to perform the calculations.
Round the result to 2 characters after the decimal point.

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(2);
    double celsius;

    cin >> celsius;

    cout << (celsius * 1.8) + 32 << endl;

    return 0;
}