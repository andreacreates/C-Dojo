#include <iostream>
#include <iomanip> ///Library for setprecision

using namespace std;

/*
    This program shows how to declare float, double and long double, how some variables have certain precision
    and after that precision capability will print garbage information, see how to declare and how it print in Scientific Notation,
    and do some fractions to see how the program prints values that are equal to infinity and Nan.

    Remember the suffixes when initializing floating points variables
    otherwise the default will be double.
*/

int main(){

    //Declare and initialize the variables
    float number1 = 1.12345678901234567890f; // Precision : 7, suffix for float is "f"
    double number2 = 1.12345678901234567890; // Precision : 15, no suffix need it because double is default
    long double number3 = 1.12345678901234567890L; // Suffix for long double is "L"

    //Print out the sizes
    cout << "sizeof float : " << sizeof(float) << endl;
    cout << "sizeof double : " << sizeof(double) << endl;
    cout << "sizeof long double : " << sizeof(long double) << endl;

    //Precision
    //For the variables that precision is smaller from the presicion I am declaring on setprecision(), the numbers
    //will be garbage. For example for float after the 7 number from the left, the numbers will be dffferent from the number
    //I declared at the beginning
    cout << setprecision(20); // Control the precision from cout.
    cout << "number1 is : " << number1 << endl; //7 digits
    cout << "number2 is : " << number2 << endl; // 15'ish digits
    cout << "number3 is : " << number3 << endl; // 15+ digits

    //Float problems : The precision is usually too limited
    //for a lot of applications
    float number4 = 192400023.0f;               // Error : narrowing conversion
    double number4double = 192400023.0;

    cout << "number4 : " << number4 << endl;
    cout << "number4 as double: " << number4double << endl;

    //Scientific notation
    //What we have seen so far in terms of floating point types
    //is fixed notation. There is another notation, scientific
    //that is handy if you have really huge numbers or small numbers
    //to represent

    cout << "-------------------------" << endl;
    
    double number5 = 192400023;
    double number6 = 1.92400023e8; // e8 = 10^8 = 10 exp(8)
    double number7 = 1.924e8;           // Can ommit the lower 00023
                                        // for simplicity if our application allows that.
    double number8 = 0.00000000003498; //number 8 and 9 are the same but both will be print with e-11
    double number9 = 3.498e-11; // multiply with 10 exp(-11)
    
    cout << "number5 is : " << number5 << endl;
    cout << "number6 is : " << number6 << endl;
    cout << "number7 is : " << number7 << endl;
    cout << "number8 is : " << number8 << endl;
    cout << "number9 is : " << number9 << endl;

    cout << "-------------------------" << endl;

    //Infinity and Nan
    cout << endl;
    cout << "Infinity and NaN" << endl;
    
    double number10 = -5.6;
    double number11;//Initialized to 0
    double number12;  //Initialized to 0

    cout << "number11 is : " << number11 << endl;
    cout << "number12 is : " << number12 << endl;

    //Infinity
    double result { number10 / number11 };
    
    cout << number10 << "/" << number11 << "  yields " << result << endl;
    cout << result << " + " << number10 << " yields " << result + number10 << endl;
    
    //NaN
    result = number11 / number12;

    cout << number11 << "/" << number12 << " = " << result << endl;

    return 0;
}