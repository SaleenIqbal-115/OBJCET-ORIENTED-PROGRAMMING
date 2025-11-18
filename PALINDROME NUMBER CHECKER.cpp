#include <iostream>
using namespace std;

int main() {
    int num, original, reversed = 0, digit;
    
    cout << "Enter a number: ";
    cin >> num;

    original = num;
    while (num > 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }

    if (original == reversed)
        cout << original << " is a palindrome number." << endl;
    else
        cout << original << " is not a palindrome number." << endl;

    int start, end;
    cout << "\nEnter the range (start and end): ";
    cin >> start >> end;

    cout << "Palindrome numbers between " << start << " and " << end << " are: ";

    for (int i = start; i <= end; i++) {
        int temp = i, rev = 0, rem;
        while (temp > 0) {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp /= 10;
        }
        if (i == rev)
            cout << i << " ";
    }

    cout << endl;
    return 0;
}

