/*
Rebecca Hahn
CS 310
04/04/2024
Hahn_M4_Discussion

Program finds the frequency of characters of a string object


*/

#include <iostream>
using namespace std;

int main()
{
    string str = "C++ Programming is awesome";
    char checkCharacter = 'a';
    int count = 0;

    for (int i = 0; i < str.size(); i+)
    {
        if (str[l] == checkCharacter)
        {
            ++count;
        }
    }

    cout << "Number of " << checkCharacter << " = " << count;

    return 0;
}

