/*
Traffic Light Signal:
Write a program to print an action based on the traffic light color:

"Red": "Stop"
"Yellow": "Get Ready"
"Green": "Go"
Any other input: "Invalid Color"
*/
#include <iostream>
using namespace std;

int main() {
    string color;
    cout << "Enter the traffic light color (Red, Yellow, Green): ";
    cin >> color;

    if (color == "Red")
        cout << "Stop" << endl;
    else if (color == "Yellow")
        cout << "Get Ready" << endl;
    else if (color == "Green")
        cout << "Go" << endl;
    else
        cout << "Invalid Color" << endl;

    return 0;
}
