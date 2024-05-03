/*
Student name: Rebecca Hahn
Date: 05/02/2024
File name: BankAccount.h


*/


//BankAccount.h
#ifndef BANK_ACCOUNT__H
#define BANK_ACCOUNT__H
#include<iostream>
using namespace std;
class bankAccount {
public:
	//public field
	string accountHolderName;
	int accountNumber;
	string accountType;
	double balance;
	double interestRate;
	//static field 
	static int accountNumSeries;
public:
	//constructor 
	bankAccount() {

		accountHolderName = "";
		accountNumber = accountNumSeries;
		accountType = "";
		balance = 0;
		interestRate = 0.0;
		accountNumSeries++;
	}
	//method to withdraw given amount
	void withdraw(double amount)
	{
		//check to make sure amount is valid
		if (amount <= 0)
		{
			cout << "\nTransaction failed: invalid amount entered( > 0) to withdraw.\n";
			return;
		}
		//check for available funds.
		if (amount > balance)
		{
			cout << "\nTransaction failed: Insufficient amount of funds in account.\n";
			return;
		}
		//if valid amount then remove from account balance
		balance -= amount;
		cout << "\nTransaction Success: Available funds in account : " << balance << endl;
	}
	//deposit given amount into account.
	void deposit(double amount)
	{
		//check valid amount
		if (amount <= 0)
		{
			cout << "\nTransaction failed: Please enter valid amount( > 0) to withdraw.\n";
			return;
		}
		//add to balance if valid.
		balance += amount;
		cout << "\nTransaction Success: Available funds in account : " << balance << endl;
	}
	//method to print all info of account.
	void printDetails()
	{

		cout << "\nAccount Holder Name : " << accountHolderName;
		cout << "\nAccount Type : " << accountType;
		cout << "\nAccount Number : " << accountNumber;
		cout << "\nBalance : " << balance;
		cout << "\nInterest Rate : " << interestRate << "%";
		cout << "\n************************************\n";
	}
};
int bankAccount::accountNumSeries = 1100;
#endif
