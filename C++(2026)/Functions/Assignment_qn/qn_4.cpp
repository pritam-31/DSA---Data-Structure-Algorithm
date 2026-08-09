// Write a function that prints the largest of 3 numbers.

#include <iostream>
using namespace std;

int largeNo(int a, int b, int c) {
    if( (a >= b) && (a >= c) ) {
        return a;
    } else if(b >= c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int a, b, c;
    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;

    cout << "Largest no. is: " << largeNo(a, b, c) << endl;

    return 0;
}