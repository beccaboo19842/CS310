// Ch02Exercise13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    double originalPrice;
    double markupPrice; 
    double salesTaxRate; 

    std::cout << "What is the original sales price?\n";
    std::cin >> originalPrice;
    
    std::cout << "What is the markup?\n";
    std::cin >> markupPrice;

    std::cout << "What is the sales tax rate?\n";
    std::cin >> salesTaxRate;

    std::cout << "original sales price: " << originalPrice << "\n";
    std::cout << "markup price: " << markupPrice << "\n";
    std::cout << "sales tax rate: " << salesTaxRate << "\n";
    std::cout << "store selling price: " << ((markupPrice/100)+1)*originalPrice << "\n";
    std::cout << "sales tax: " << ((salesTaxRate / 100)) * ((markupPrice / 100) + 1) * originalPrice << "\n";
    std::cout << "Final Price: " << ((salesTaxRate/100))* ((markupPrice / 100) + 1) * originalPrice + ((markupPrice / 100) + 1) * originalPrice << "\n";


    // (variable / 100)+1


    

    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
// To make a profit, a local store marks up the prices of its items by a certain percentage.  Write a C++ program that reads the original price of the item sold, the percentage of the marked-up price, and the sales tax rate.  
// The program then outputs the 
// the final price of the item.  (The final price of the item is the selling price plus the sales tax.)