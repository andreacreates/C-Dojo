#include <iostream>

using namespace std;

/*
    This program has a function that adds two numbers.
*/

//This fucntion takes two int and return the sum of both int parameters
int addNumbers(int firstNumber, int secondNumber){
    int sum = 0;
    sum = firstNumber + secondNumber;
    return sum;
}

int main(){

    int first_number = 3;
    int second_number = 77;

    cout << "First Number : " << first_number << endl;
    cout << "Second Number : " << second_number << endl;
    cout << "The Sum is : " << addNumbers(first_number, second_number) << endl << endl; //Using addNumbers() passing two declared ints

    cout << "The Sum of these two numbers 88 and 66 is " << addNumbers(88,66) << endl; // Using addNumbers() passing two numbers
    
    return 0;

}
