// Find the  largest value in an array

#include <iostream>
using namespace std;

int main() {
    int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    int n = sizeof(array) / sizeof(array[0]);

    int max = array[0];
    int min = array[0];

    for (int i=0; i<n; i++) {
        if (array[i] > max) {
            max = array[i];
        }

        if (array[i] < min) {
            min = array[i];
        }
    }
    cout << "max: " << max << endl;
    cout << "min: " << min << endl;
}