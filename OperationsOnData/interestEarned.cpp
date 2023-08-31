#include <iostream>
#include <cmath>
#include <iomanip>      // Required for setw
using namespace std;

int main() {

    // Variables
    double interest_rate, 
           principal, 
           amount_in_savings;
    int time_compounded; 

    // Ask for the principal, interest rate and number of times compounded
    cout << "Enter balance in savings account : ";
    cin >> principal;
    cout << "Enter interest rate : ";
    cin >> interest_rate;
    cout << "How many times the interest is compounded during the year? : ";
    cin >> time_compounded;

    // Calculate
    interest_rate /= 100 ;

    // Amount = Principal * ((1 + Rate/T)^T)
    amount_in_savings = principal *  pow((1 + (interest_rate/time_compounded)), time_compounded);

    interest_rate *= 100 ;

    // Display
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