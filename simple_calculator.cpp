#include <iostream>
using namespace std;


int main() {
    int num1, num2, sum;
    char op;

    cout << "Enter a first number\n";
    cin >> num1;

    cout << "Enter an operand\n";
    cin >> op;

    cout << "Enter a second number\n";
    cin >> num2;

    switch (op) {
        case '+':
            sum = num1 + num2;
            break;
        case '-':
            sum = num1 - num2;
            break;
        case '*':
            sum = num1 * num2;
            break;
        case '/':
            sum = num1 / num2;
            break;
    }

    cout << sum;
    return 0;
}
