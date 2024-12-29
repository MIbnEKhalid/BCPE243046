/*
Even or Odd Number:
Write a program to check whether a given number is even or odd.
*/
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number % 2 == 0){
        cout << "Even" << endl;
    }
    else{
        cout << "Odd" << endl;
    }

    return 0;
}
