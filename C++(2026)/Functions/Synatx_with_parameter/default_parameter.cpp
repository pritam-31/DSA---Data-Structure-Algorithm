#include <iostream>
using namespace std;

int sum(int a, int b=0) { // a, b are parameters
    int sum = a + b;
    return sum;
}

int multiply(int a, int b) { // a, b are parameters
    int multi = a * b;
    return multi;
}

int main() {

    int s = sum(2); // 2, 4 are arguments
    int m = multiply(1, 6);

    cout << s << endl;
    cout << m << endl;
    
    return 0;
}
