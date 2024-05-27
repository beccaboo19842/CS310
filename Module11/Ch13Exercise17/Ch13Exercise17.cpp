/*
Student name: Rebecca Hahn
Date: 05/26/2024
File name: Ch13Exercise17.cpp
Description: This program will generate 25 real numbers between 10 and 100.
*/

#include <random>
#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    // Random number generator
    random_device rd;
    mt19937 mt(rd());
    uniform_real_distribution<double> dist(10.0, 100.0);

    // Print out 25 times
    for (int i = 0; i < 25; ++i)
        cout << "Real Number #" << i+1 << ": " << dist(mt) << "\n";

    // Exit printout
    cout << "Press any key to continue..." << endl;
    _getch();

    return 0;
}