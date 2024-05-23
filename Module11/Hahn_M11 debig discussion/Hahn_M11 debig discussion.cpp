/*
Student name: Rebecca Hahn
Date: 05/23/2024
File name: Hahn_M11 debug discussion.cpp
Description: This is a program that contains bugs. This is not meant to be a functional program. 
*/


#include <iostream>
using namespace std;

template <typename T>
T add(T num1, T num2) {
    return (num1 + num2);
}

int main() 
    int result1;
    double result2;
    // calling with int parameters
    result1 = add<int(2, 3);
    cout << "2 + 3 = " << result1 << endl;

    // calling with double parameters
    result2 = add<double>(2.2, 3.3);
    cout << "2.2 + 3.3 = " << result2 << endl;

    return 0;
} 