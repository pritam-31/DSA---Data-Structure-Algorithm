#include <iostream> 
using namespace std;

int main() {

    //Qn:-1] Write a C++ program to get a number from the user and print whether it's positive, negative or zero.
    int num;
    cout << "Enter Number: ";
    cin >> num;

    if(num > 0) {
        cout << "It's a +ve number" << endl;
    } else if(num < 0) {
        cout << "It's a -ve number" << endl;
    } else {
        cout << "You entered zero" << endl;
    }

    //Qn:-2] Write a C++ program that takes a year from the user and print whether that year is a leap year or not.
    int year;
    cout << "Enter the Year: ";
    cin >> year;

    if((year % 4 == 0) && (year % 400 == 0)) {
        cout << year << "<- It's a Leap Year" << endl;
    } else {
        cout << year << "<- It's not a Leap Year" << endl;
    }


    return 0;
}