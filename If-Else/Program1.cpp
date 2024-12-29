/*
Simple Eligibility Check:
Write a program to check if a person is eligible to vote. The voting age is 18 or older. Print "Eligible" if the age is 18 or above; otherwise, print "Not Eligible."
*/
#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18)
        cout << "Eligible" << endl;
    else
        cout << "Not Eligible" << endl;

    return 0;
}
