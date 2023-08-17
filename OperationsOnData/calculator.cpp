#include <iostream>

using namespace std;

/*
    This program is a calculator with addition, subtraction, multiplication and division. 
    It asks to the user for two numbers, what operation the user
    wants to perform and prints the result.
*/

int main(){

    double number1;
    double number2;
    bool correctOperation = false;
    char operation;
    double result;

    cout << "Welcome to the Calculator!" << endl;
    cout << "Please enter the first number and press enter:" << endl;
    cin >> number1;                                                     //Get first number from user
    cout << "Please enter the second number and press enter:" << endl;
    cin >> number2;                                                     //Get second number from user
    cout << "Now pick what operation you want to apply to this two numbers" << endl
            <<"Please enter one of the following options and press enter" << endl 
            << "For addition enter \"a\" or \"+\" " << endl
            << "For subtraction enter \"s\" or \"-\" " << endl
            << "For multiplication enter \"m\" or \"*\" " << endl
            << "For division enter \"d\" or \"/\" " << endl
            << "Your choice : " << endl;

    while(correctOperation == false){
        cin >> operation;                                               //Get operation from user
        if(operation == 'a' || operation == 'A' || operation == '+'){
            result = number1 + number2;
            operation = '+';
            correctOperation = true;
        }else if (operation == 's' || operation == 'S' || operation == '-'){
            result = number1 - number2;
            operation = '-';
            correctOperation = true;
        }else if (operation == 'm' || operation == 'M' || operation == '*'){
            result = number1 * number2;
            operation = '*';
            correctOperation = true;
        }else if (operation == 'd' || operation == 'D' || operation == '/'){
            result = number1 / number2;
            operation ='/';
            correctOperation = true;
        }else{
            cout << "You didn't enter a valid choice. Please try again" << endl << "Your choise : ";
        }
    };

    cout << number1 << " " << operation << " " << number2 << " = " << result << endl;

    return 0;


}