#include <iostream>

using namespace std;

/*
    This program checks if the customer has legal age to drink alcolic beverage
    from the bar.
*/

int main(){

    int legal_drinking_age = 21;
    int customer_age;
    bool you_can_drink = false;

    cout << "Hello Welcome to the bar!\nCould you please tell me your age?\n";
    cin >> customer_age;

    if (customer_age >= legal_drinking_age) you_can_drink = true;

    if(you_can_drink) {
        cout << "You can order any alcoholic or non-alcoholic drinks from the bar\n";
    }else{
        cout <<"You can only order non-alcoholic drinks from the bar.\n";
    }
    cout << "Thank you for confirming your age. I hope you have a good time.\n";

    return 0;
}