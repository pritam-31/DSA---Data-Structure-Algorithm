#include <iostream>
using namespace std;

int main() {
    int marks; 
    cout << "Enter Your Marks: ";
    cin >> marks;

    if(marks >= 90) {
        cout << "O" << endl;
    } else if(marks >= 80) {
        cout << "A" << endl;
    } else if(marks >= 70) {
        cout << "B" << endl;
    } else if(marks >= 60) {
        cout << "C" << endl;
    } else if(marks >= 50) {
        cout << "D" << endl;
    } else {
        cout << "F" << endl;
    }

    return 0;
}