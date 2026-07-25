#include <iostream> 
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        cout << "*"; // First
        for(int j = 1; j <= (n-1); j++) {
            if(i == 1 || i == n) { // (first_row OR last_row) 
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << "*" << endl;
    }
    
    return 0;
}