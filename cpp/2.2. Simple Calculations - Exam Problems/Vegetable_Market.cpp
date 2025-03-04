/*
Task: vegetable exchange

A gardener sells the harvest from his garden on the vegetable exchange.
Sell vegetables for N leva per kilogram and fruits for M leva per kilogram.
Write a program to calculate the income from the euro (assuming that one euro is equal to BGN 1.94).

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Enter price per kilogram of vegetables: " << endl;
    double vegetable_price;
    cin >> vegetable_price;

    cout << "Enter price per kilogram of fruits: " << endl;
    double fruits_price;
    cin >> fruits_price;

    cout << "Total kilograms of vegetables: " << endl;
    int vegetables_total;
    cin >> vegetables_total;

    cout << "Total kilograms of fruits: " << endl;
    int fruits_total;
    cin >> fruits_total;

    double sum = ( (vegetable_price * vegetables_total) + (fruits_price * fruits_total) ) / 1.94;
    
    cout << setprecision(15) << sum << endl;

    return 0;

}