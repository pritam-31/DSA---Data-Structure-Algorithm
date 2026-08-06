// WAF to calculate the sum of digits of a number.

#include <iostream>
using namespace std;

int Sum(int n) {
    int digSum = 0;

    while (n > 0) {
        int lastDig = n % 10;
        digSum += lastDig;
        n /= 10;
    }

    return digSum;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Sum = " << Sum(n) << endl;

    return 0;
}