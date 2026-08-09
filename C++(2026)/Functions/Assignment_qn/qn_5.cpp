// Question-5: Write a function that accepts a character (ch) as a parameter and returns the character that occurs after ch in the English alphabet. Eg: input = 'c', return value = 'd'. Note: for ch = 'z', return 'a'.

#include <iostream>
using namespace std;

const char nextChar(char ch) {
    if(ch == 'z') {
        return 'a';
    } else {
        return (ch + 1);
    }
}

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    cout << "Next character is: " << nextChar(ch) << endl;

    return 0;
}