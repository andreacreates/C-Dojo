#include <iostream>
#include <string>

using namespace std;

/*
    This program has diffrent examples of input and output
    Part 1 has cout, cerr, clog, cin, cin.ignore()
    Part 2 has cout and use getline(cin, variable) for input
*/

int main(){

    int age = 21;
    string name;

    //Printing data
    cout << "Part 1 of the program just using different type of data outputs and inputs." << endl;
    cout <<"The number is : " << 12 << endl;
    cout << "The age is : " << age << endl;

    //Error
    cerr << "cerr output : Something went wrong." << endl;

    //Log message
    clog << "clog output : This is a log message." << endl;

    cout << "\nPlease type in your name : " << endl;
    cin >> name; //Input name

    cout << "Please type in your age : " << endl;
    cin >> age; //Input age

    cout << "Hello " << name << "! You are " << age << " years old." << endl;

    //Chaining cin
    cout << "\nNow lets get your name and age in on line using chaining cin." << endl;
    cout << "Please type in your last name and age, separated by spaces : " << endl;
    cin >> name >> age; //Input name and age
    cin.ignore();
    cout << "Hello " << name << "! You are " << age << " years old." << endl;

    int age1;
    string full_name;
    
    //Using getline() for data with space
    cout << "\nPart 2 lets get your full name, we are using getline to get input with spaces." << endl;
    cout << "Please type in your full name : " << endl;
    getline(cin, full_name); //Input full name
    cout << "Please type in your age : " << endl;
    cin >> age1; //Input age
    cout << "Hello " << full_name << "! You are " << age1 << " years old." << endl;

    return 0;
}