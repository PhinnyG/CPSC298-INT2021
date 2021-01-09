//Name:     Finn White
//Program:  ProblemEmployeePay.cpp
//Class:    CPSC298

#include <iostream>
#include <iomanip>

using namespace std;

const double PAY_RATE = 16.0;
const double OVERTIME_MULT = 1.5;
const double SS_TAX = 0.06;
const double F_INCOME_TAX = 0.14;
const double S_INCOME_TAX = 0.05;
const double MED_INSURANCE = 10.0;

double hoursWorked;
double grossPay;
double calcGrossPay(double hoursWorked);
void netPayBreakdown(double grossPay);
void input();
void output(double grossPay, double netPay);

int main() {
    input();
    grossPay = calcGrossPay(hoursWorked);
    netPayBreakdown(grossPay);

}

//handles input from the user and ensures a valid amount of hours
void input() {
    cout << endl << "Please enter the number of hours worked: ";
    cin >> hoursWorked;
    while(hoursWorked < 0 || hoursWorked > 168) {
        if (hoursWorked < 0)
            cout << "Please enter a non-negative value: ";
        else
            cout << "There are not that many hours in a week. Please enter a valid value: ";
        cin >> hoursWorked;
    }
    cout << endl;
}

//calculates the employees gross pay
double calcGrossPay(double hoursWorked) {
    if (hoursWorked - 40 <= 0) {
        return hoursWorked * PAY_RATE;
    }
    else {
        double overtimeHours = hoursWorked - 40;
        return PAY_RATE * 40 + PAY_RATE * OVERTIME_MULT * overtimeHours;
    }
}

//formats output and calculates withholdings and net pay
void netPayBreakdown(double grossPay){
    if (grossPay == 0){
        cout << "You did not work this week. " << endl << endl;
        return;
    }

    double totalWithheld = 0;

    cout << "Your gross pay is: $" << setprecision(2) << fixed << grossPay << endl;

    cout << "Social Security tax: $" << setprecision(2) << fixed << grossPay * SS_TAX << endl;
    totalWithheld += grossPay * SS_TAX;

    cout << "Federal income tax: $" << setprecision(2) << fixed << grossPay * F_INCOME_TAX << endl;
    totalWithheld += grossPay * F_INCOME_TAX;

    cout << "State income tax: $" << setprecision(2) << fixed << grossPay * S_INCOME_TAX << endl;
    totalWithheld += grossPay * S_INCOME_TAX;

    if(grossPay - totalWithheld < 10)
        cout << "Unfortunately you did not work enough to afford medical insurance." << endl;
    else {
        cout << "Medical insurance: $" << MED_INSURANCE << endl;
        totalWithheld += 10;
    }

    cout << endl << "After applicable withholdings your net pay is: $" << setprecision(2) << fixed << grossPay - totalWithheld << endl << endl;
}
