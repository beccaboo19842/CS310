/* /*
Student name: Rebecca Hahn
Date: 04/19/2024
File name: Ch07Exercise4

*/

// This is a program that removes vowels from a given string and determines weather something is a vowel

#include <iostream>
#include <string>
#include <conio.h>
using namespace std;


//Checking weather or not the character is a vowel
bool isCharacterAVowel(char aeiouy)
{

    //List of all vowels
    const string vowels = "aeiouyAEIOUY";

    //Find and return the position of the first vowel
    return vowels.find(aeiouy) != string::npos;
}

//Function to remove vowels
string removeVowels(string str)
{
    //Looping across the entire string
    for (int i = 0; i < str.size(); i++)
    {
        //Checking to see if the character is a vowel
        if (isCharacterAVowel(str[i])) {

            //Using recursion to remove the vowels
            return str.substr(0, i) + removeVowels(str.substr(i + 1));
        }
    }
    //return str when there are no vowels
    return str;
}

int main()
{

    //Variable declaration 
    string str;

    //Prompting user for input
    cout << "Input a test string: ";   
    getline(cin, str);

    //Printing results of removed vowels
    cout << "Results without vowels: " << removeVowels(str) << '\n';


    // Exit printout
    cout << "Press any key to continue..." << endl;
    _getch();

    return 0;
}
