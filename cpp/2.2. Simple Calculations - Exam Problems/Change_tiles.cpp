/*
Task: repair of tiles

On the playground in front of a residential block should be placed tiles.
The site is squarely shaped with side N meters. The tiles are wide “W” meters and long “L” meters.
On the site there is a bench with a width of M meters and a length of O meters.
Underneath it, you don't have to put tiles. Each tile is placed in 0.2 minutes.
Write a program that reads from the console the dimensions of the site, tiles and bench and calculate
how many tiles it takes to cover the site and calculate the time for placing all the tiles.

Example: a site in size 20 m has an area of 400 sq.m. Bench, 1 m wide and 2 m long, occupies an area of 2 sq.m.
One tile is 5 m wide and 4 m long and has an area of 20 sq.m. The area to be covered is 400 – 2 ° 398 sq.m.
It takes 398 / 20x19.90 tiles. The time required времеis 19.90 ? 0.28? 3.98 minutes.
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "enter the length of the side of the site: " << endl;
    int square_side;
    cin >> square_side;
    square_side *= square_side;

    cout << "enter the width of one tile: " << endl;
    double width;
    cin >> width;

    cout << "enter the length of one tile: " << endl;
    double length;
    cin >> length;
    double total_tile {length * width};
    cout << "Enter the width of the bench: " << endl;
    double bench_width;
    cin >> bench_width;

    cout << "Enter the length of the bench: " << endl;
    double bench_length;
    cin >> bench_length;
    double total_bench {bench_length * bench_width};
    square_side -= total_bench;

    total_tile = square_side / total_tile;
    double time = total_tile * 0.2;

    cout << total_tile << endl;
    cout << time << endl;
    return 0;
}