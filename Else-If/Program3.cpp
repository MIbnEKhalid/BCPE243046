/*
Day of the Week:
Write a program to print the name of the day based on the number input (1 for Monday, 2 for Tuesday, etc., up to 7 for Sunday). Print "Invalid input" for numbers outside this range.
*/
#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Enter a number (1-7): ";
    cin >> day;

    if (day == 1)
        cout << "Monday" << endl;
    else if (day == 2)
        cout << "Tuesday" << endl;
    else if (day == 3)
        cout << "Wednesday" << endl;
    else if (day == 4)
        cout << "Thursday" << endl;
    else if (day == 5)
        cout << "Friday" << endl;
    else if (day == 6)
        cout << "Saturday" << endl;
    else if (day == 7)
        cout << "Sunday" << endl;
    else
        cout << "Invalid input" << endl;

    return 0;
}
