/*
This program demostrates how "setprecesion" rounds floating point value
and how to use "fixed" to set how many decimal numbers should be displayed. 
*/

#include <iostream>
#include <iomanip>      // Require for setprecision()
using namespace std;

int main () {

    // First Operation
    double quotient, number1 = 132.364, number2 = 26.91;

    cout << "Operation 1 : " << number1 << " / " << number2 << endl
         << "Using normal setpresicion." << endl;
    quotient = number1 / number2;
    cout << quotient << endl;
    cout << setprecision(8) << quotient << endl;
    cout << setprecision(7) << quotient << endl;
    cout << setprecision(6) << quotient << endl;
    cout << setprecision(5) << quotient << endl;
    cout << setprecision(4) << quotient << endl;
    cout << setprecision(3) << quotient << endl;
    cout << setprecision(2) << quotient << endl;
    cout << setprecision(1) << quotient << endl;

    cout << "Using fixed setprecision." << endl;
    cout << setprecision(2) << fixed << quotient << endl; // Using fixed
    cout << setprecision(4) << quotient << endl;          // After using fixed once all setprecision will be fixed

    // Second Operation
    double quotient1, number3 = 6132.3656, number4 = 23.973;

    cout << "Operation 2 : " << number3 << " / " << number4 << endl;
    quotient1 = number3 / number4;
    cout << quotient1 << endl;
    cout << setprecision(5) << quotient1 << endl;
    cout << setprecision(4) << quotient1 << endl;
    cout << setprecision(3) << quotient1 << endl;
    cout << setprecision(2) << quotient1 << endl;
    cout << setprecision(1) << quotient1 << endl;

    return 0;
}