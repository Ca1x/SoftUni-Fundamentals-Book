/*
Task: console converter - from radians to degrees

Write a program that reads an angle in radians (rad) and converts it to degrees) (deg).
Search the Internet for a suitable formula.
Round the result to the nearest integer using the function round(degree)which is in the library <cmath>. .
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double radians;

    cin >> radians;
    
    double degrees = radians * (180 / M_PI);

    cout << degrees << endl;
    


    return 0;
}