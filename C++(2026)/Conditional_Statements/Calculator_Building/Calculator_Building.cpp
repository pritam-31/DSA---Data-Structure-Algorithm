//Build a Calculator using Switch, for the 4 basic arithmetic operations (+, -, *, /).. 

#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter Operator: ";
    cin >> op;

    // //using if-else-if
    // if(op == '+') {
    //     cout << "a + b = " << (a+b) << endl;
    // } else if(op == '-') {
    //     cout << "a - b = " << (a-b) << endl;
    // } else if(op == '*') {
    //     cout << "a * b = " << (a*b) << endl;
    // } else if(op == '/') {
    //     cout << "a / b = " << (a/b) << endl;
    // } else {
    //     cout << "Invalid Operator";
    // }

    //using switch
    switch(op) {
        case '+': cout << "a + b = " << (a+b) << endl;
            break;
        case '-': cout << "a - b = " << (a-b) << endl;
            break;
        case '*': cout << "a * b = " << (a*b) << endl;
            break;
        case '/': cout << "a / b = " << (a/b) << endl;
            break;

        default: cout << "Invalid Operator";
    }

    return 0;
}