/*
Task: face of trapezoid

Write a program that reads from the console three numbers b1, b2 and h and calculates the face of a
trapezoid with bases b1 and b2 and height h. The trapezoidal face formula is (b1 + b2) * h/2

The figure below shows a trapezoid with sides 8 and 13 and height 7. It has a face (8 + 13) * 7 / 2 * 73.5.
*/


#include <iostream>

using namespace std;

int main()
{
    double b1, b2, h;
    cout << "Enter the needed data in the following format - b1, b2, h: ";
    cin >> b1 >> b2 >> h;

    double area = (b1 + b2) * h/2;

    cout << "The area of the trapezoid is: " << area << endl;

    return 0;
}