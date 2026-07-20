#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number: ";
    cin >> n;

    int digSum = 0;

    while (n > 0) {
        int lastDig = n % 10;

        if (lastDig % 2 != 0) {
            digSum = digSum + lastDig;
        }

        n = n / 10;
    }

    cout << "Sum = " << digSum << endl;

    return 0;
}

// Enter number => 244
// >> Sum = 0

// But,
// Enter number => 1485
// >> Sum = 6
