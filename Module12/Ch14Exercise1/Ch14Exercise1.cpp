/*
Student name: Rebecca Hahn
Date: 06/02/2024
File name: Ch14Exercise1.cpp
Description: Converts feet and inches to centimeters
*/

#include <string>
#include <iostream>
#include <iomanip> 
#include <conio.h>

using namespace std;

class NonNumberException : public exception {
public:
	const char* what() {
		return "non-number";
	}
};

class NegativeNumberException : public exception {
public:
	const char* what() {
		return "negative number";
	}
};

// will check if string is a number
bool isNumber(const string& str) {
	size_t found = str.find_first_not_of("-.0123456789");
	return (found == string::npos);
}

// will prompt user for a value
double askForValue(const string valueName) {
	// variable declarations
	double value = 0.0;
	bool isValidNumber = false;

	// keep asking until a valid number is given
	while (!isValidNumber) {
		try {
			string stringValue = "";
			cout << "How many " << valueName << "?" << endl;
			cin >> stringValue;

			if (!isNumber(stringValue)) {
				throw NonNumberException();
			}

			value = stod(stringValue);

			if (value < 0) {
				throw NegativeNumberException();
			}
			isValidNumber = true;
		}
		catch (NonNumberException nonne) {
			isValidNumber = false;
			cout << "ERROR: " << nonne.what() << " was entered. Please enter an actual number." << endl << endl;
		}
		catch (NegativeNumberException negne) {
			isValidNumber = false;
			cout << "ERROR: " << negne.what() << " was entered. Please enter a valid positive number." << endl << endl;
		}
	}

	return value;
}

int main() {
	//Variable declarations 
	double feet = 0.0;
	double inches = 0.0;
	const double cmPerInch = 2.54;

	//Variable assignments
	feet = askForValue("feet");
	inches = askForValue("inches");

	//Calculations 
	double cm = (feet * 12 + inches) * cmPerInch;

	// Display results
	cout << "is " << cm << " in centimeters (cm)" << endl;

	// Exit printout
	cout << "Press any key to continue..." << endl;
	_getch();

	return 0;
}
