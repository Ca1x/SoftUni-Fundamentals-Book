/*
Task: daily profit

Ivan is a programmer at an American company and works from home on average N days a month,
earning an average of M dollars a day. At the end of the year, Ivan receives a bonus that is equal to 2.5
monthly salaries. From the year he earned 25% taxes. Write a program to calculate how much is Ivan’s
net average profit per day in BGN, as he spends what he earns in Bulgaria.
It is estimated that there are exactly 365 days in the year.
The exchange rate of the dollar against the lev will be submitted to the function.

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int working_days;
    cin >> working_days;

    double money_per_day;
    cin >> money_per_day;

    double dollar_rate;
    cin >> dollar_rate;

    double salary {working_days * money_per_day};
    salary = (salary * 12) + (salary * 2.5);
    salary =  ( salary - (salary * 0.25) ) * dollar_rate;

    salary = salary / 365;

    cout << fixed << setprecision(2);

    cout << salary << endl;

    return 0;
}