#include <iostream>

using namespace std;
/*
    This program prints Hello World!
    and has a function that returns a constant value.
*/

//Function get_value() return a constant value.
const int get_value(){
    return 3;
}

//Main function
int main(){
    
    //Print Hello World! and print contant value in function get_value()
    cout << "Hello World! " << get_value() << endl; 

    return 0;
}