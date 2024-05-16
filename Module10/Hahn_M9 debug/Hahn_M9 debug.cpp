/*
Student name: Rebecca Hahn
File name: Hahn_M9 debug.cpp 
Date: 05/08/2024
*/


#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

class Pet {
public:
    void wagTail() {
        cout << "The tail is wagging." << std::endl;
    }
};

class Dog : public Pet {
public:
    void happy() {
        cout << "The dog is happy." << std::endl;
    }
};

class Cat :public Pet {
public:
    void mad() {
        cout << "The cat is mad." << std::endl;
    }
};

int main() {
    Dog dog;
    dog.wagTail();
    dog.happy();

    Cat cat;
    cat.wagTail();
    cat.mad();

    cout << "\nPress any key to exit the program.";
    _getch(); // pause the program so the user can see the output

    return 0;
}
