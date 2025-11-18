#include <iostream>
using namespace std;

double add(double a, double b) 
{
    return a + b;
}

double subtract(double a, double b) 
{
    return a - b;
}

double multiply(double a, double b)
{
    return a * b;
}

double divide(double a, double b) 
    {
    if (b == 0) 
	{
        cout << "Error: Division by zero is not allowed." << endl;
        return 0;
    }
    return a / b;
}

int mod(int a, int b) 
{
    if (b == 0) 
	{
        cout << "Error: Modulus by zero is not allowed." << endl;
        return 0;
    }
    return a % b;
}

int main() {
    double num1, num2;
    char op;

    cout << "Enter first number: ";
    if (!(cin >> num1)) {
        cout << "Invalid input. Please enter a number." << endl;
        return 1;
    }

    cout << "Enter second number: ";
    if (!(cin >> num2)) {
        cout << "Invalid input. Please enter a number." << endl;
        return 1;
    }

    cout << "Enter operation (+, -, *, /, %): ";
    cin >> op;

    cout << "----------------------------------" << endl;

    switch (op) {
        case '+':
            cout << "Result: " << add(num1, num2) << endl;
            break;

        case '-':
            cout << "Result: " << subtract(num1, num2) << endl;
            break;

        case '*':
            cout << "Result: " << multiply(num1, num2) << endl;
            break;

        case '/':
            cout << "Result: " << divide(num1, num2) << endl;
            break;

        case '%':
            cout << "Result: " << mod((int)num1, (int)num2) << endl;
            break;

        default:
            cout << "Invalid operation! Please use +, -, *, /, or %." << endl;
    }

    return 0;
}

