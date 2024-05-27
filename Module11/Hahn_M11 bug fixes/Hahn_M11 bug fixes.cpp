
/*
Student Name: Rebecca Hahn
File Name: Hahn_M11 bug fixes.cpp
Date: 05/26/2024
Description: This is my solution to the bugs. 

*/

#include <iostream>
#include <conio.h> // Include for _getch
using namespace std;

// Template function to find the maximum of two values
template <typename T, typename U>
U max(T a, U b) {
    // This function is intended to return the larger of two values a and b.
    return a > b ? a : b;
}

// The next part intends to declare a template function to print a value.
template <typename T>
void print(T value) {
    // This function is intended to print the value passed to it.
    cout << value << endl;
}

int main() {
    int x = 10;      // Declare an integer variable x and initialize it with 10.
    double y = 20.5; // Declare a double variable y and initialize it with 20.5.

    // This line intends to print the maximum of x and y using the max template function.
    cout << "The maximum is: " << max(x, y) << endl;

    // This line intends to call the print function to print "Hello, World!" 
    print("Hello, World!");

    // Pause the program and wait for a key press
    cout << "Press any key to continue..." << endl;
    _getch(); // Waits for a key press

    return 0; // Indicate that the program ended successfully.
}