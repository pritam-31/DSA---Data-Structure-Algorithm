#include <iostream>
using namespace std;

int main() {

    int a = 5;
    int b = 3;    

    // Binary Op
    cout << "+ " << (a + b) << endl;
    cout << "- " << (a - b) << endl; 
    cout << "* " << (a * b) << endl; 
    cout << "/ " << (a / b) << endl; 
    cout << "% " << (a % b) << endl; 

    cout << "=========" << endl;

    // Unary Op
    int c = 3;
    c++; 
    cout << "c = " << c << endl;
    c--;
    cout << "c = " << c << endl;

    return 0;
}