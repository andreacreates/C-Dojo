/*
    This program uses a type cast expression to print a character from a number.
    Program 3-10 page 103 Tony Gaddis' book.
*/
#include <iostream>
using namespace std;

int main() {
    int number = 65;

    // Display the value of the number variable.
    cout << number << endl;

    // Display the value of number converted to the char data type.
    cout << static_cast<char>(number) << endl;
    return 0;
}