// WAF which takes 2 no.s as parameters (a and b), o/p = a^2 + b^2 + 2^ab

#include <iostream> 
using namespace std;

int calculate(int a, int b) {
    int res = (a * a) + (b * b) + 2 * (a * b);
    return res;
}

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Result = " << calculate(a, b);

    return 0;
}