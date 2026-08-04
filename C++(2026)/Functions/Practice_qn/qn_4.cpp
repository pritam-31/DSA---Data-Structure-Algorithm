// WAP to find the Binomial Co-efficient for given 'n' & 'r'.

#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for(int i=1; i<=n; i++) {
        fact = fact * i;
    }

    return fact;
}

int binCoeff(int n, int r) {
    int val1 = factorial(n); // n!
    int val2 = factorial(r); // r!
    int val3 = factorial(n-r); // (n-r)!

    int result = val1 / (val2 * val3);
    
    return result;
}

int main() {
    int n, r;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter r: ";
    cin >> r;

    cout << binCoeff(n, r);

    return 0;
}