//  arrays are passed by reference

#include <iostream>
using namespace std;

int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    cout << *arr << endl;
    cout << *(arr + 0) << endl;
    cout << *(arr + 1) << endl;
    cout << *(arr + 2) << endl;
    cout << *(arr + 9) << endl;

    return 0;
}