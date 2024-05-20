/*

Student name: Rebecca Hahn
File name: Hahn_M10 bug fixes.cpp
Date: 5/19/2024


*/

#include <iostream>
#include <conio.h>
using namespace std;

/**
 * Function to find the min and max values in an integer array
 * It updates the values stored at the memory locations pointed to by the 'min' and 'max' pointers accordingly.
 *
 * @param numbers array of integers
 * @param size size of the array
 * @param min pointer to store min value
 * @param max pointer to store max value
 */
void getMinAndMax(int numbers[], int size, int* min, int* max) {

    for (int i = 0; i < size; i++) {
        if (numbers[i] < *min) { // Dereferencing the 'min' pointer to compare with the array element
            *min = numbers[i]; // Updating the value stored at the memory location pointed to by 'min'
        }
        if (numbers[i] > *max) {// Dereferencing the 'max' pointer to compare with the array element
            *max = numbers[i]; // Updating the value stored at the memory location pointed to by 'max'
        }
    }

}
int main() {
    // Declare array to store 5 integers entered by user
    int numbers[5];

    cout << "\nPlease enter 5 numbers to store in an array..." << endl;
    // Prompt user to input 5 numbers and store them sequentially in the array using pointer arithmetic
    for (int i = 0; i < 5; i++) {
        cout << "Number: ";
        cin >> *(numbers + i); // Using pointer arithmetic to access array elements
    }

    int* min = new int[0]; // Initialize min with the first element of numbers array
    int* max = new int[0]; // Initialize max with the first element of numbers array

    // Output the content of the array using pointer arithmetic.
    cout << "\nNumbers Array = [ ";
    for (int i = 0; i < 5; i++) {
        if (i < 4) {
            cout << (numbers + i) << ", ";
        }
        else {
            cout << (numbers + i) << " ]" << endl;
        }
    }

    // Call the function to find the minimum and maximum values in the array
    getMinAndMax(numbers, 5, min, max); // Passing the array and pointers to 'min' and 'max'

    // Output the minimum and maximum values
    cout << "\nThe min of numbers array: " << min << endl;
    cout << "The max of numbers array: " << max << endl;


    cout << "\nExiting program. Press any key to continue..." << endl;
    _getch(); // Halt execution until key entry

    return 0;
}