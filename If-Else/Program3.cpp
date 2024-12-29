/*
Number Divisibility:
Write a program to check if a number entered by the user is divisible by 5. Print "Divisible by 5" if true; otherwise, print "Not Divisible by 5."
*/
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number % 5 == 0){
        cout << "Divisible by 5" << endl;
    }
    else{
        cout << "Not Divisible by 5" << endl;
    }
    return 0;
}
