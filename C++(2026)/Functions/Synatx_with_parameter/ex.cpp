#include <iostream>
using namespace std;

void myFunc() {
    cout << "Hello \n";
}

void multiply(int a, int b) {
    int multi = a * b;
    cout << multi;
}

int main() {
    myFunc();
    multiply(1, 6);

    return 0;
}

