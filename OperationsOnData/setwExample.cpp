/*
This program display three rows of numbers
Program 3-13 page 110 Gaddis' book
*/

#include <iostream>
#include <iomanip>      // Required for setw
using namespace std;

int main(){

    int num1 = 8420, num2 = 4,    num3 = 563,
        num4 = 34,   num5 = 93,   num6= 8299,
        num7 = 345,  num8 = 8398, num9= 54;

    // Display the first row of numbers
    cout << setw(6) << num1 << setw(6)
         << num2 << setw(6) << num3 << endl;

    // Display the second row of numbers
    cout << setw(6) << num4 << setw(6)
         << num5 << setw(6) << num6 << endl;

    // Display the thrid row of numbers
    cout << setw(6) << num7 << setw(6)
         << num8 << setw(6) << num9 << endl;

    return 0;
}