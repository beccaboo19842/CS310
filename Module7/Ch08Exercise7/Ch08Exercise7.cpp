/*
Student Name: Rebecca Hahn
File name: Ch08Exercise7.zip
Date: 4/27/2024
Description: This assignment takes names of candidates in the local election and the number of votes recieved. It outputs their name, number of votes, and percentage of total votes recieved. 
*/

#include <iostream>
#include <iomanip> 
#include <conio.h>

using namespace std;
int main() {
	//Variable declarations 
	string candidates[5];
	double numberOfVotes[5];
	double totalNumberOfVotes = 0.0;
	int winner = 0;


		// display print out percentages with precision
	cout << fixed << showpoint << setprecision(2);

	//Variable assignments
	for (int i = 0; i < 5; i++) {
		cout << "What is the candidates last name?" << endl;
		cin >> candidates[i];

		cout << "What is the number of votes recieved?" << endl;
		cin >> numberOfVotes[i];

		totalNumberOfVotes += numberOfVotes[i];

		if (numberOfVotes[i] > numberOfVotes[winner]) {
			
			winner = i; 
		}
	}

	//Calculations 
	double percentageOfVotes[5];
	
	for (int i = 0; i < 5; i++) {

		percentageOfVotes[i] = numberOfVotes[i] / totalNumberOfVotes * 100.0;
	}

	// Display election results
	cout << "candidates		number of votes		percentage of votes" << endl;

	for (int i = 0; i < 5; i++) {

		cout << candidates[i] << "			" << numberOfVotes[i] << "			" << percentageOfVotes[i] << endl;
	}
	
	cout << "The winner of the election is " << candidates[winner] << endl;

	// Exit printout
	cout << "Press any key to continue..." << endl;
	_getch();

	return 0;
}


