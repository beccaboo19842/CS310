/*
Rebecca Hahn
03/20/2024

This program calculates interest. 

*/

#include <iostream>
#include <iomanip>
#include <conio.h>

int main()
{
    // Variable declaration 
    double netBalance;
    double payment;
    double d1;
    double d2;
    double interestRate;

    // Input/output

    std::cout << "What is the net balance?\n";
    std::cin >> netBalance;

    std::cout << "What is the payment made?\n";
    std::cin >> payment;

    std::cout << "What is the number of days in billing cycle?\n";
    std::cin >> d1;

    std::cout << "What is the number of days payment is made before the billing cycle?\n";
    std::cin >> d2;

    std::cout << "What is the interest rate per month?\n";
    std::cin >> interestRate;

    // Calculations

    double averageDailyBalance = (netBalance * d1 - payment * d2) / d1;

    double interest = averageDailyBalance * interestRate;

    // Print out

    std::cout << std::fixed << std::setprecision(2); // set the decimal to two places.
    std::locale loc(""); // for the thousands separator
    std::cout.imbue(loc); // for the thousands separator

    std::cout << "interest: " << interest << "\n";

    std::cout << "Done!\n";
    _getch();
} 
   
