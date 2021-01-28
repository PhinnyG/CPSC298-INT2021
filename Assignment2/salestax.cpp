//Name:     Finn White
//Program:  salestax.cpp
//Class:    CPSC298

#include <iostream>

using namespace std;

//calculates the cost of an item after the given tax rate
float addTax(float taxRate, float cost) {
    return cost + cost * taxRate;
}

int main() {
    cout << "I can calculate tax! Enter tax rate as a decimal (EX: 0.08 = 8%) and then the cost of an item." << endl;
    float rate;
    float cost;
    cin >> rate;
    cin >> cost;
    cout << "The cost after tax is: $" << addTax(rate, cost) << endl;
}

