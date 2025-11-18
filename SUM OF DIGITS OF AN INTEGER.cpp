#include <iostream>
using namespace std;

int main() {
    int num, temp, digit;
    int sum = 0, product = 1;

    cout << "Enter an integer: ";
    cin >> num;

    temp = num;

    while (temp != 0) {
        digit = temp % 10;      
        sum += digit;           
        product *= digit;       
        temp /= 10;             
    }

    cout << "Sum of digits of " << num << " = " << sum << endl;
    cout << "Product of digits of " << num << " = " << product << endl;

    return 0;
}

