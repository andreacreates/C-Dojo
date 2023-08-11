#include <iostream>

using namespace std;

/*
 * This program shows how to declare ints with Decimal, Octal, Hexadecimal and 
 * Binary number systems and prints the decimal number of each.
 */

int main () {
	
	int number1 = 15; //Decimal
	int number2 = 017; //Octal add prefix 0
	int number3 = 0x0f; //Hexadecimal add prefix 0x
	int number4 = 0b00001111; //Binary - C++14 add prefix 0b

	cout << "Hello World !" << endl;

	cout << "Number 1 is : " << number1 << endl;
	cout << "Number 2 is : " << number2 << endl;
	cout << "Number 3 is : " << number3 << endl;
	cout << "Number 4 is : " << number4 << endl;

	return 0;
}
