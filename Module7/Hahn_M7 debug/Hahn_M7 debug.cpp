/*
* Student Name Rebecca Hahn
* File Name: Hahn_M6 Debug
* Date: 4/20/2024
* Description: debug
*/

#include <iostream>
#include <conio.h>
#include <limits>
using namespace std;

// Define constant size for 2D array
const int SIZE = 10;

/**
 * Function to print multiplication table
 *
 * @param table: 2D array representing the multiplication table
 */
void printMultiplicationTable(int table[SIZE][SIZE]) {

    cout << "\n\t---------------- MULTIPLICATION TABLE ----------------" << endl;
    // Outer loop for each row
    for (int i = 0; i < SIZE; ++i) {
        // Nested loop for each column
        for (int j = 0; j < SIZE; ++j) {
            cout << table[i][j] << "\t";
        }
        cout << endl; // Move to new line after printing each row
    }
    cout << "\t------------------------------------------------------" << endl;
}
int main() {
    // Declare and Initialize 2D array using constant dimensions of SIZE by SIZE
    int multiplicationTable[SIZE][SIZE];
    // Varaibles to store user input
    int num1, num2;

    // Populate the multiplication table using nested for loop
    for (int i = 0; i < SIZE; ++i) { // Iterate over each row
        for (int j = 0; j < SIZE; ++j) { // Iterate over each column
            // Calculate and store the product of corresponding row and column indicies 
            multiplicationTable[i][j] = (i + 1) * (j + 1);
        }
    }

    // Print the multiplication table
    printMultiplicationTable(multiplicationTable);

    cout << "\nEnter two numbers separated by spaces to multiply: ";
    // Check if extraction fails or input is out of range
    while (!(cin >> num1 >> num2) || num1 < 1 || num1 > SIZE || num2 < 1 || num2 > SIZE) {
        cout << "Invalid input! Please enter two integers between 1 and " << SIZE << ": ";
        cin.clear(); // Clear error state
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
    }

    // Print the product of the entered numbers by accessing the element in the 2D array at the indicies (num1-1) and (num2-1) 
    // -1 for zero indexing of the correct row and column of the 2D array
    cout << "The product: " << multiplicationTable[num1 - 1][num2 - 1] << endl;

    cout << "\nExiting program. Press any key to continue..." << endl;
    _getch(); // Halt execution until key entry

    return 0;
}