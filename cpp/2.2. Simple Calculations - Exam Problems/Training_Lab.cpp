/*
Task: study room

The training room has a rectangular size l of w meters,
with no columns in its interior. The hall is divided into two parts –
left and right, with a corridor – approximately in the middle.
In the left and right are rows with desks. In the back of the hall there is a large front door.
In front of the hall there is a department with a podium for the teacher.
One workplace occupies 70 by 120 cm (a mass of 70 by 40 cm + seat for a chair and passing with a size of 70 by 80 cm).
The corridor is at least 100 cm wide. It is estimated that because of the front door (which has a hole of 160 cm) is
lost exactly 1 workplace, and because of the department (which is 160 by 120 cm) exactly 2 jobs are lost.
Write a program that introduces dimensions of the classroom and calculates the number of jobs in it at the
described location (see figure).
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Enter the length and width of the study room: (in meters)" << endl;
    double length, width;
    cin >> length;
    cin >> width;

    
    length = (length * 100) / 120;
    width = (width * 100 - 100) / 70;

    int available_stations = floor(length) * floor(width) - 3;
    cout << "There are " << length << " rows" << " and " << width << " cols" << endl;
    cout << "There are " << available_stations << " seats available" << endl;

    return 0;
}