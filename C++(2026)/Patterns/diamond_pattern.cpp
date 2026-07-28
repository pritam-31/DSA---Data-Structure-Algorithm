// Diamond Pattern

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    //1st Pyramid Pattern
    //Outer Loop [1 to n] = i(rows)
    for(int i=1; i<=n; i++) {

        //inner loop-->>
        //print spaces [1 to (n-i)]
        for(int j=1; j<=(n-i); j++) {
            cout << " ";
        }

        //print stars [ 1 toi (2*i)-1 ]
        for(int j=1; j<=((2*i)-1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    //2nd Pyramid (inverted)
    //Outer Loop [n to 1] = i(rows)
    for(int i=n; i>=1; i--) {
        
        //inner loop
        //print spaces [1 to (n-i)]
        for(int j=1; j<=(n-i); j++) {
            cout << " ";
        }

        //print stars [ 1 to ((2*i)-1) ]
        for(int j=1; j<=((2*i)-1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}