#include <iostream>
using namespace std;

void BinToDec(int binNum) {
    int n = binNum;
    int decNum = 0;
    int pow = 1;

    while(n > 0) {
        int lastDig = n % 10;
        decNum = decNum + lastDig * pow;
        pow = pow * 2;
        n = n / 10;
    }
    cout << "Decimal number: " << decNum << endl;
}

int main() {
    int n;
    cout << "Enter a binary number: ";
    cin >> n;

    BinToDec(n);

    return 0;
}