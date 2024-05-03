/* 
Student name: Rebecca Hahn
Date: 05/02/2024
File name: Ch04Exercise16


*/


//main.cpp
#include "BankAccount.h"
#include<limits>
#include<stdio.h>
#include <string>
#include <iostream>
using namespace std;

//method to print menu.
void printMenu()
{
	cout << "\n1: Enter 1 to add customer."
		<< "\n2: Enter 2 for existing customer."
		<< "\n3: Enter 3 to print customers data."
		<< "\n9: Enter 9 to exit the program. "
		<< "\nEnter your choice: ";
}
//method that takes prompt to be printed and returns double value of amount.
//helps in getting amount as input for withdrawl,deposit
double getAmountAsInput(string prompt)
{
	cout << "\n" << prompt;
	double balance;
	cin >> balance;
	return balance;
}
//main method.
int main()
{
	const int totalAccounts = 10;
	bankAccount accounts[totalAccounts];
	int choice = 0;
	int curIndex = 0;
	string accountHolderName;
	int accountNumber;
	string accountType;
	double balance;
	double interestRate;
	int subChoice;
	//brings menu up until user exits.
	while (choice != 9)
	{
		printMenu();
		//get choice.
		cin >> choice;

		switch (choice)
		{
			//if adding new user
		case 1:
		{
			if (curIndex == totalAccounts)
			{
				cout << "\nAccounts Limit Reached. \n";
			}
			else
			{
				//clear characters
				//method to get account holder name.
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				//get all fields
				cout << "\nEnter customer's name: ";
				getline(cin, accountHolderName);
				cout << "\nEnter account type (checking/savings): ";
				cin >> accountType;
				balance = getAmountAsInput("Enter amount to be deposited: ");
				cout << "\nEnter interest rate (as a percent): ";
				cin >> interestRate;
				//initilize fields.
				accounts[curIndex].accountHolderName = accountHolderName;
				accounts[curIndex].accountType = accountType;
				accounts[curIndex].deposit(balance);
				accounts[curIndex].interestRate = interestRate;
		
				curIndex++;
			}
			break;
		}
		case 2:
		{
			//get existing account number if option 2 is selected
		
			cout << "\nEnter Existing customer account number : ";
			cin >> accountNumber;
			bool isFound = false;
			for (int i = 0; i < curIndex; i++)
			{

				if (accounts[i].accountNumber == accountNumber)
				{
					cout << "\nHi: " << accounts[i].accountHolderName << ", Please Choose any one of the options below:\n";
					isFound = true;
					cout << "\nEnter 1. to deposit amount";
					cout << "\nEnter 2. to withdraw amount";
					cout << "\nEnter 3. to see account info";
					cin >> subChoice;
					if (subChoice == 1)
					{
						balance = getAmountAsInput("Enter amount to be deposited : ");
						accounts[i].deposit(balance);
					}
					else if (subChoice == 2)
					{
						balance = getAmountAsInput("Enter amount to be withdrawed : ");
						accounts[i].withdraw(balance);
					}
					else if (subChoice == 3)
					{
						accounts[i].printDetails();
					}
					else
					{
						cout << "\nError: Invalid Choice.\n";
					}
				}
			}
			//if entered account not found, print not found.
			if (isFound == false)
			{
				cout << "\nSorry.Account Number Not Found.\n";
			}
			break;
		}
		case 3:
		{
			for (int i = 0; i < curIndex; i++)
			{
				accounts[i].printDetails();
			}
			break;
		}
		case 9:
		{
			cout << "\nQuitting....";
			break;
		}
		default:
		{
			cout << "\nInvalid choice. Try again\n";
		}
		}

	}
	return 0;
}
