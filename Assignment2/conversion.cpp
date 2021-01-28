//Name:     Finn White
//Program:  conversion.cpp
//Class:    CPSC298

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

const double METERS_IN_FOOT = 0.3048;

//converts feet and inches into centimeters
double inchesToCenti(double feet, double inches) {
    double centimeters = 0;
    centimeters += feet * METERS_IN_FOOT;
    centimeters += inches / 12 * METERS_IN_FOOT;
    return centimeters * 100;
}

//handles output to the console as well as separating meters and centimeters
void output(double feet, double inches) {
    double centimeters = inchesToCenti(feet, inches);
    cout << feet << " Feet and " << inches << " inches is ";
    cout << (centimeters - fmod(centimeters, 100.0)) / 100 << " meters and " << fmod(centimeters, 100.0) << " centimeters";
}

//handles user input
void input() {
    cout << "I will convert feet and inches to meters and centimeters! " << endl;
    cout << "Type 'exit' to stop" << endl;
    double feet = 0;
    double inches = 0;
    string quit = "";
    while(quit.compare("exit") != 0) {
        cout << "Feet: ";
        cin >> feet;
        cout << "Inches: ";
        cin >> inches;
        output(feet, inches);
        cout << endl << "Type 'exit' to quit or anything to continue: ";
        cin >> quit;
    }
}

int main() {
    input();
}

