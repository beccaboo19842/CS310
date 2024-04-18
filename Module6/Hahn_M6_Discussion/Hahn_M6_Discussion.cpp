/*
Student name: Rebecca Hahn
Date: 04/10/2024
File name: Hahn_M5 discussion

*/

// This is a program that outputs the sum of two distances in feet and inches. This program contains errors.

#include <iostream>
using namespace std

struct Distance {
    int feet;
    int inch;
}d1, d2, sum;

int main() {
    cout << "Enter 1st distance," << endl;
    cout << "Enter feet: ";
    cin >> d1.feet;
    cout << "Enter inch: ";
    cin >> d1.inch;

    cout << "\nEnter information for 2nd distance" << endl;
    cout << "Enter feet: ";
    cin >> d2.feet;
    cout << "Enter inch: ";
    cin >> d2.inch;

    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;

    // changing to feet if inch is greater than 12
    if (sum.inch > 12) {
        // extra feet
        int extra = sum.inch / 12;

        sum.feet += extra;
        sum.inch -= (extra * 12);
    }

    cout << endl << "Sum of distances = " << sum.feet << " feet  " << sum.inch << " inches";
    return 0;
}