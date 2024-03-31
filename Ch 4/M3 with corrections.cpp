#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 5;
    int z;

    if (x > y)
        z = x - y;
    else
        z = x + y;

    cout << "The value of z is: " << z << endl;

    return 0;
}