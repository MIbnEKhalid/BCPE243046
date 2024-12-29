/*
Grade Classification:
Write a program to assign grades based on a student's score:

90 and above: "A"
80 to 89: "B"
70 to 79: "C"
Below 70: "Fail"
*/
#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter the score: ";
    cin >> score;

    if (score >= 90)
        cout << "A" << endl;
    else if (score >= 80)
        cout << "B" << endl;
    else if (score >= 70)
        cout << "C" << endl;
    else
        cout << "Fail" << endl;

    return 0;
}
