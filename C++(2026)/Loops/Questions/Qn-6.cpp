// Reverse a given number and print the result. 

#include <iostream>
using namespace std;

int main() {
    int n = 10829;
    int res = 0;

    //Logic--->>>>
    while (n > 0) {
        int lastDig = n % 10;
        res = (res * 10) + lastDig;
        n = n / 10; // [n /= 10]
    }

    cout << "Reverse = " << res << endl;

    return 0;
}