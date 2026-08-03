
#include <iostream>
using namespace std;

int sum(int a, int b) {
    int s = a + b; // "s" is in the Local scope
    return s;
}

int main() {
    cout << sum(4, 5) << endl;

    return 0;
}