/*
BMI Classification:
Write a program to classify BMI as follows:

Below 18.5: "Underweight"
18.5 to 24.9: "Normal weight"
25 to 29.9: "Overweight"
30 or more: "Obese"
*/
#include <iostream>
using namespace std;

int main() {
    float bmi;
    cout << "Enter your BMI: ";
    cin >> bmi;

    if (bmi < 18.5)
        cout << "Underweight" << endl;
    else if (bmi < 25)
        cout << "Normal weight" << endl;
    else if (bmi < 30)
        cout << "Overweight" << endl;
    else
        cout << "Obese" << endl;

    return 0;
}