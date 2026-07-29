// Print the 0-1 Triangle Pattern. n = 5

#include <iostream>
using namespace std;

int main() {
    int n = 5;


    for(int i=1; i<=n; i++) {

        for(int j=1; j<=i; j++) {

            //0 or 1 printing
            if((i+j) % 2 == 0) {
                cout << 1;
            } else {
                cout << 0;
            }  
        }
        cout << endl;
    }

    return 0;
}