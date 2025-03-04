/*
Task: perimeter and face of circle

Write a program that reads from the console number r
and calculates and prints the face and perimeter of a circle/circle with radius r.

*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the radius of the circle: ";
    double radius;
    cin >> radius;

    double area  = 3.14159 * radius * radius;
    double perimeter = 2 * 3.14159 * radius;

    cout << "Area : " << area << endl;
    cout << "Perimeter : " << perimeter << endl;


    return 0;
}