// WAP to print, if a no. "odd" or "even"

#include <iostream> 
using namespace std;

int factorial(int n) {

    int fact = 1;

    for(int i=1; i<=n; i++) {
        fact = fact * i;
    }
    cout << "Factorial (" << n << "!) = " << fact << endl;
    return fact;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    factorial(n); // passing n as parameter..

    return 0;
}