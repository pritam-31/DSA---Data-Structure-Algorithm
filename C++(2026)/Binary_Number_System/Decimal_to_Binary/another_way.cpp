#include <iostream>
using namespace std;

void decimalToBinary(int n) {
    string binary = "";

    while (n > 0) {
        int rem = n % 2;
        binary = binary + char(rem + '0');
        n = n / 2;
    }
    cout << "Binary: " << binary << endl;
}

int main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    decimalToBinary(n);

    return 0;
}