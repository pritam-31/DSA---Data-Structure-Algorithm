// Ex-1: print the user is Adult or not Adult....
// Ex-2: print largest of 2 no.
// Ex-3: check -> is no. Odd/Even

#include <iostream> 
using namespace std;

int main() {
    //Ex-1
    int age;
    cout << "Enter your age: ";
    cin >> age;

    bool isAdult = (age >= 18) ? true : false;

    if(isAdult) {
        cout << "You are Adult" << endl;
    } else {
        cout << "You aren't Adult" << endl;
    }


    cout << "----------------------" << endl;


    //Ex-2
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    int largestNum = (a >= b) ? a : b;
    cout << "Largest Num: " << largestNum << endl;


    cout << "--------------------------" << endl;


    //Ex-3
    int num;
    cout << "Enter the Number: ";
    cin >> num;

    int isEven = (num % 2 == 0) ? true : false;
    if(isEven) {
        cout << "The no. is Even" << endl;
    } else {
        cout << "The no. is Odd" << endl;
    }

    return 0;
}