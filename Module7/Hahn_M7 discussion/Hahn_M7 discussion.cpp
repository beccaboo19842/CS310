/*
Student name: Rebecca Hahn
File name: Hahn_M7 discussion.cpp
Date: 4/25/2024
Description: This program is meant for debugging. The program calculates the average of a set of numbers using arrays. This program contains errors.

*/

#include <iostream>
using namespace std;

int main()
{
    int n, i;
    float num[350], sum = 0.0, average;

    cout << "Enter the amount of data points to be used: ";
    cin >> n;

    while (n > 350 || n <= 0)
    {
        cout << "number should be between (1 to 350)." << endl;
        cin << "Re enter number: ";
        cout >> n;
    }

    for (i = 0; i < n; ++i)
    {
        cin << i + 1 << ". Enter number: ";
        cin >> num[i];
        sum += num[i];
    }

    average = sum / n;
    cin << "Average = " << average;

    return 0;
}
