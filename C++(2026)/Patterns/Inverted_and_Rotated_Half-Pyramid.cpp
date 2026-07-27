#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    //Outer Loop
    for(int i=1; i<=n; i++) {
        
        //Inner Loop
        //spaces print
        for(int j=1; j<=(n-i); j++) {
            cout << " ";
        }

        //stars print
        for(int j=1; j<=i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    

    return 0;
}