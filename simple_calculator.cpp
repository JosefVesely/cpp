#include <iostream>
using namespace std;


int main() {
    float num1, num2, result;
    char op;

    cout << "Enter a first number\n";
    cin >> num1;

    cout << "Enter an operand\n";
    cin >> op;

    cout << "Enter a second number\n";
    cin >> num2;

    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
    }

    cout << result;
    return 0;
}
