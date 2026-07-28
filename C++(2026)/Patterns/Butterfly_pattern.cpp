// print the Butterfly Pattern

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    //1st Pattern
    //Outer-Loop
    for(int i=1; i<=n; i++) {

        //Inner-Loop (3-parts)
        //1st :- Print Stars
        for(int j=1; j<=i; j++) {
            cout << "*";
        }

        //2nd :- Print Spaces
        for(int j=1; j<=(2*(n-i)); j++) {
            cout << " ";
        }

        //3rd :- Print Stars
        for(int j=1; j<=i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    //2nd Pattern (inverted of 1st)
    //Outer-Loop
    for(int i=n; i>=1; i--) {

        //Inner-Loop (3-parts)
        //1st :- Print Stars
        for(int j=1; j<=i; j++) {
            cout << "*";
        }

        //2nd :- Print Spaces
        for(int j=1; j<=(2*(n-i)); j++) {
            cout << " ";
        }

        //3rd :- Print Stars
        for(int j=1; j<=i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}