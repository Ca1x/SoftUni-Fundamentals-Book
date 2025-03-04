/*
Task: face of triangle

Write a program that reads from the console side and height of a triangle and calculates its face.
Use the formula for the face of a triangle: area = a * h / 2.
Round the result to 2 digits after the decimal point using fixed << setprecision(2)by turning on the library <iomanip>).
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(2);
    double a, h;
    cin >> a;
    cin >> h;
    
    cout << "Triangle area = " << (a * h / 2) << endl;

}