
/*
Student name: Rebecca Hahn
Date: 04/10/2024
File name: Hahn_M8 discussion

This is a program that contains error. This program reverses numbers
*/
#include <iostream>
using namespace std;

int main() {

    int n, reversed_number = 0, remainder

    cout << "Enter an integer: ";
    cin >> n;

    while (n = 0) {
        remainder = n % 10;
        reversed_number = reversed_number * 10 + remainder;
        n /= 10;
    }

    cout << "Reversed Number is = " << reversed_number;

    return 0;
}

