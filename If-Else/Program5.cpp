/*
Positive or Negative Number:
Write a program to check whether a number entered by the user is positive or negative.
*/
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number > 0){
        cout << "Positive" << endl;
    }
    else if (number < 0){
        cout << "Negative" << endl;
    }
    return 0;
}
