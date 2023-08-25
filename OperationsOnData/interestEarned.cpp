#include <iostream>
#include <cmath>
#include <iomanip>      // Required for setw
using namespace std;

int main() {

    //double interest_rate, time_compounded, principal, amount_in_savings;

    double interest_rate = 4.25;
    int time_compounded = 12;
    double principal = 1000; 
    double amount_in_savings;
    double result;
/*
    cout << "Enter balance in savings account : ";
    cin >> principal;
    cout << "Enter interest rate : ";
    cin >> interest_rate;
    cout << "How many times the interest is compounded during the year? : ";
    cin >> time_compounded;
*/
    result = pow((1 + (interest_rate/time_compounded)), time_compounded);
    amount_in_savings = principal * result;

    cout << setw(20) << left << "Interest Rate: ";
    cout << setw(12) << setprecision(2) << fixed << right << interest_rate << "%" << endl;
    cout << setw(20) << left << "Time Compounded: ";
    cout << setw(12) << right << time_compounded << endl;
    cout << setw(20) << left << "Principal: " << " $ ";
    cout << setw(9) << setprecision(2) << fixed << right << principal << endl;
    cout << setw(20) << left << "Interest: " << " $ ";
    cout << setw(9) << setprecision(2) << fixed << right << interest_rate << endl;
    cout << setw(20) << left << "Amount in Savings: " << " $ ";
    cout << setw(9) << setprecision(2) << fixed << right << amount_in_savings << endl;

    return 0;
}