/*
This program calculates thetotalsales ofthree days.
It show different ways to display the sales of each day and total
using setw(), setprecision(), fixex, left.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double day1, day2, day3, total;

    // Get the sales for each day.
    cout << "Please enter the total amount of sales in $ on the first day : " << endl;
    cin >> day1;
    cout << "Please enter the total amount of sales in $ on the second day : " << endl;
    cin >> day2;
    cout << "Please enter the total amount of sales in $ on the third day : " << endl;
    cin >> day3;

    // Calculate the total sales.
    total = day1 + day2 + day3;

    // Using setw and setprecision
    cout << "   " << setw(8) << "Day 1" << setw(8) << "Day 2" << setw(8) << "Day 3" 
         << setw(8) << "Total" << endl;
    cout << setw(3) << "$" << setw(8) << setprecision(6) << day1 << setw(8) 
         << day2 << setw(8) << day3 << setw(8) << total << endl; 

    // Using setw, setprecision and fixed
    cout << endl << "Example with fixed decimals" << endl;
    cout << "   " << setw(8) << "Day 1" << setw(8) << "Day 2" << setw(8) << "Day 3" 
         << setw(8) << "Total" << endl;
    cout << setw(3) << "$" << setw(8) << setprecision(2) << fixed << day1 << setw(8) 
         << day2 << setw(8) << day3 << setw(8) << total << endl; 

    // Using setw, setprecision, fixed and left
    cout << endl << "Example using left" << endl;
    cout << left <<"   " << setw(8) << "Day 1" << setw(8) << "Day 2" << setw(8) 
         << "Day 3" << setw(8) << "Total" << endl;
    cout << setw(3) << "$" << setw(8) << setprecision(2) << fixed << day1 << setw(8) 
         << day2 << setw(8)  << day3 << setw(8) << total << endl; 


    return 0;
}