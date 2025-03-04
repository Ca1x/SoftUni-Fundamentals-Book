/*
Task: greeting by name

Write a program that reads
from the console name of a person and
prints Hello, <name>!, where <name>is the first introduced name.
*/

#include <iostream>

using namespace std;

int main()
{
    string name;
    getline(cin, name);
    cout << "Hello, " << name << "!" << endl;

    return 0;
}