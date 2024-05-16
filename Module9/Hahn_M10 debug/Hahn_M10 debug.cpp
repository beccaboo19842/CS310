/*
* Student Name: Rebecca Hahn
 * File Name: Hahn_M10 debug.cpp
 * Date: 5/16/2024
 * Description: This is a file that contains bugs. This file should not run.

*/



#include <iostream>
using namespace std;
int main() {
    int var = 8;

    // store address of variable
    int* point_var = var;

    // print variable
    cout << "var = " << var << endl;

    // print *point_var
    cout << "*point_var = " << *point_var << endl
        << endl;

    cout << "Changing value of var to 3:" << endl;

    // change value of variable to 3
    var = 3;

    // print variable
    cout << "var = " << var << endl

    // print *point_var
    cout << "*point_var = " << *point_var << endl
        << endl;

    cout << "Changing value of *point_var to 13:" << endl;

    // change value of variable to 13
    *point_var = 13;

    // print variable
    cout << "var = " << var << endl;

    // print *point_var
    cout << "*point_var = " << *point_var << endl;
    return 0;
}
