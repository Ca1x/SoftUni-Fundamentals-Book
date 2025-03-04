/*
Pesho used to buy bitcoins. Now he's going on a trip to Europe and he's going to need a euro. In addition to bitcoins,
there are Chinese yuan. Pesho wants to exchange his money in euros for the excursion.
Write a program to calculate how many euros you can buy according to the following exchange rates:

1 bitcoin $1,168.
1 Chinese yuan $0.15.
1 dollar is 1.76 leva.
1 euro of 1.95 leva.

The exchange bureau has a commission of 0 to 5 percent of the final amount in euros.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double sum {0};
    int bitcoin;
    cin >> bitcoin;
    // Converting bitcoin into BGN
    sum += bitcoin * 1168;

    double yuan;
    cin >> yuan;

    // Converting Chinese yuan into BGN
    sum += (yuan * 0.15) * 1.76;
    // Converting BGN into EUR
    sum /= 1.95;

    double commision;
    cin >> commision;

    commision /= 100;
    sum -= commision * sum;
    cout << fixed << setprecision(2);
    cout << sum << endl;
    return 0;
}