/*
Largest of Three Numbers:
Write a program to find the largest of three numbers entered by the user.
*/
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c)
        cout << "Largest: " << a << endl;
    else if (b >= a && b >= c)
        cout << "Largest: " << b << endl;
    else
        cout << "Largest: " << c << endl;

    return 0;
}