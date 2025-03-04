/*
Task: from inches to centimeters

Write a program that reads from the console a number (not necessarily a whole) and converts the number of inches to centimeters.
For this purpose, it multiplies the inch by 2.54 (because 1 inch is 2.54 centimeters).
*/

#include <iostream> 

using namespace std;

int main()
{
    cout << "Inches = ";
    double inches;
    cin >> inches;
    double centimeters = inches * 2.54;
    cout << "Centimeters = ";
    cout << centimeters << endl;

    return 0;
}