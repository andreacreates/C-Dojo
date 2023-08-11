#include <iostream>

using namespace std;

/*
    This program show examples of integer, shor, long, long long modifiers signed and unsigned
    These modifiers only apple to integral types : those in wich you can store decimal numbers

    Signed range [0 ~ 2^n -1] 
    Unsigned range [-2^(n-1) ~ 2^(n-1) -1]

    unsigned int range = [0 ~ 4,294,967,295]
    signed int range = [-2,147,483,648 ~ 2,147,483,647]



*/

int main() {

    signed int value1 = 10;
    signed int value2 = -330;

    cout << "value1 : " << value1 << endl;
    cout << "value2 : " << value2 << endl;
    cout << "sideof(value1) : " << sizeof(value1) << endl;
    cout << "sideof(value2) : " << sizeof(value2) << endl;

    unsigned int value3 = 88;
    unsigned int value4 = -5; //This is going to show a run time error it will print a different value

    cout << "value3 : " << value3 << endl;
    cout << "value4 : " << value4 << endl; //It won't print -5 because unsigned modifier doesn't work with negative numbers
    cout << "sideof(value3) : " << sizeof(value2) << endl;
    cout << "sideof(value4) : " << sizeof(value2) << endl;

    cout << "---------------------" << endl;

    //short and long
    short short_var = -32768; //  2 Bytes 
    short int short_int = 455; // 
    signed short signed_short = 122; //
    signed short int signed_short_int = -456; // 
    unsigned short int unsigned_short_int = 456;
    
    int int_var = 55; // 4 bytes
    signed signed_var = 66;//
    signed int signed_int = 77;//
    unsigned int unsigned_int = 77;
    
    long long_var = 88; // 4 OR 8 Bytes
    long int long_int = 33;
    signed long signed_long = 44;
    signed long int signed_long_int = 44;
    unsigned long int unsigned_long_int = 44;

    long long long_long = 888;// 8 Bytes
    long long int long_long_int = 999;
    signed long long signed_long_long = 444;
    signed long long int signed_long_long_int = 1234;
    unsigned long long int unsigned_long_long_int = 1234;


    cout << "Short variable : " << short_var<<  " , size : "
        << sizeof (short) << " bytes" << endl;

    cout << "Short Int : " << short_int << " , size : "
        << sizeof (short int) << " bytes" << endl;

    cout << "Signed short : " << signed_short
        << " , size : " << sizeof (signed short) << " bytes" << endl;

    cout << "Signed short int :  " << signed_short_int
        <<  " , size : " << sizeof (signed short int) << " bytes" << endl;
        
    cout << "unsigned short int :  " << unsigned_short_int
        <<  " , size : " << sizeof (unsigned short int) << " bytes" << endl;
        
    cout << "---------------------" << endl;



    cout << "Int variable :  " << int_var <<" , size : "
        << sizeof (int) << " bytes" << endl;

    cout << "Signed variable " << signed_var <<" , size : "
        << sizeof (signed) << " bytes" << endl;

    cout << "Signed int :  " << signed_int <<" , size : "
        << sizeof (signed int) << " bytes" << endl;
        
    cout << "unsigned int :  " << unsigned_int <<" , size : "
        << sizeof (unsigned int) << " bytes" << endl;
        
    cout << "---------------------" << endl;



    cout << "Long variable :  " << long_var << " , size : "
        << sizeof (long) << " bytes" << endl;

    cout << "Long int :  " << long_int <<" , size : "
        << sizeof (long int) << " bytes" << endl;

    cout << "Signed long :  " << signed_long <<" , size : "
        << sizeof (signed long) << " bytes" << endl;

    cout << "Signed long int : " << signed_long_int <<" , size : "
        << sizeof (signed long int) << " bytes" << endl;
        
    cout << "unsigned long int : " << unsigned_long_int <<" , size : "
        << sizeof (unsigned long int) << " bytes" << endl;
        
    cout << "---------------------" << endl;



    cout << "Long long : " << long_long <<" , size : "
        << sizeof (long long) << " bytes" << endl;

    cout << "Long long int : " << long_long_int <<" , size : "
        << sizeof (long long int) << " bytes" << endl;

    cout << "Signed long long : " << signed_long_long <<" , size : "
        << sizeof (signed long long) << " bytes" << endl;
        
    cout << "Signed long long int : " << signed_long_long_int <<" , size : "
        << sizeof (signed long long int) << " bytes" << endl;
        
    cout << "unsigned long long int : " << unsigned_long_long_int <<" , size : "
        << sizeof (unsigned long long int) << " bytes" << endl;
        
    cout << "---------------------" << endl;


    return 0;
}