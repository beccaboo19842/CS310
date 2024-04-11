/*
Rebecca Hahn
04/10/2024
Professor Krasso
CS 310

*/

// This is a program that outputs all of the factors of a number. This program contains errors.


#include <iostream>
using namespace std;

int main() {
    int n, 1;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Factors of " << n << " are: ";
    for (i = 1; i <= n; ++i) {
        if (n % i == 0)
            cout << i << " ";
    }

    return 0
}