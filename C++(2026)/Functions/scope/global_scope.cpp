
#include <iostream>
using namespace std;

int s;

int sum(int a, int b) {
    s = a + b; // "s" is in the Global scope, that can be accessed in every fnx
    return s;
}

int main() {
    cout << sum(4, 5) << endl;

    return 0;
}