#include <iostream>

using namespace std;

int main () {
	
	int number1 = 15; //Decimal
	int number2 = 017; //Octal
	int number3 = 0x0f; //Hexadecimal
	int number4 = 0b00001111; //Binary - C++14
				//
	cout << "Hello World !" << endl;

	cout << "Number 1 is : " << number1 << endl;
	cout << "Number 2 is : " << number2 << endl;
	cout << "Number 3 is : " << number3 << endl;
	cout << "Number 4 is : " << number4 << endl;
			 //
	return 0;
}