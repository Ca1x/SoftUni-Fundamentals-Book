/*
Task: face of rectangle in the plane

A rectangle is set with the coordinates of two of its opposite angles (x1, y1) – (x2, y2).
Calculate the area and its perimeter. The entrance is read from the console. The numbers x1, y1, x2 and y2
are given one per row. The output is displayed on the console and must contain two lines with one number
on each of them – the face and the perimeter.

*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x1, x2, y1, y2;
    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;
    // Instead of abs you can also use max and min...
    double surface = abs( (x1 - x2) ) * abs( (y1 - y2) );
    double perimeter = 2 * ( abs( (x1 - x2) ) + abs( (y1 - y2) ) );

    cout << surface << endl;
    cout << perimeter << endl;

    return 0;
}