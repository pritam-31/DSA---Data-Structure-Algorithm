// Print the Sum of the digits of a number, using "while" loop.

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number = ";
    cin >> n;

    int digSum = 0;

    while (n > 0) {
        int lastDig = n % 10;
        digSum += lastDig; // [digSum + lastDig = digSum]
        n /= 10; // [n / 10 = n]
    }

    cout << "Sum = " << digSum << endl;

    return 0;
}