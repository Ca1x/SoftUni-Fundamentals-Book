/*
Task: calculating a face squared

The first task of this topic is this: to write a console program that introduces an integer a and calculates the
face squared with a side. The task is trivial: we read a number from the console,
multiply it by itself, and print the result of the console.

*/

#include <iostream>

using namespace std;

int main()
{
    cout << "a = ";
    int a;
    cin >> a;
    int area = a * a;
    cout << "Square = ";
    cout << area << endl;


    return 0;
}