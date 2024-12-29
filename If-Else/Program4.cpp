/*
Temperature Check:
Write a program to determine if the temperature input by the user is "Hot" (greater than 30°C) or "Cold" (30°C or less).
*/
#include <iostream>
using namespace std;

int main() {
    float temperature;
    cout << "Enter the temperature in °C: ";
    cin >> temperature;

    if (temperature > 30){
        cout << "Hot" << endl;
    }
    else{
        cout << "Cold" << endl;
    }
    return 0;
}
