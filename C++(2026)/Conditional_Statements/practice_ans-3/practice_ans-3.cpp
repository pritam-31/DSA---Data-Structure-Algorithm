//create an Income Tax Calculator-->>
// income < 5L  ===>> 0% tax
// income between 5L to 10L ===>> 20% tax
// income > 10L ===>> 30% tax


#include <iostream>
using namespace std;

int main() {
    int income;
    float tax;
    cout << "Enter Your Income (in Lakh) : ";
    cin >> income;

    if(income < 5) {
        tax = 0;
    } else if(income >= 5 && income <= 10) {
        tax = 0.2 * income;
    } else if(income > 10) {
        tax = 0.3 * income;
    }

    cout << "Tax = " << (tax * 100000) << endl;

    return 0;
}