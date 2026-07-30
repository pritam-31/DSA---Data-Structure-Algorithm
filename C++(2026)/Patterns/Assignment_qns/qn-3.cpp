#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for(int i=1; i<=n; i++) {

        //Spaces [i to (n-i)]
        for(int j=1; j<=(n-i); j++) {
            cout << " ";
        }

        //Num backward(decreasing numbers) [i to 1]
        for(int j=i; j>=1; j--) {
            cout << j;
        }

        //Num forward(increasing numbers) [2 to i]
        for(int j=2; j<=i; j++) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}