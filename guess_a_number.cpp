#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int number = 1 + (rand() % 100); // get random number between 1 and 100
    int guess;

    while (true) {
        cout << "Guess a number: ";
        cin >> guess;

        if (guess < number) {
            cout << "Higher\n";
        }
        else if (guess > number) {
            cout << "Lower\n";
        }
        else {
            cout << "Congratulations! You guessed the number. \n";
            cout << "Number is " << number << "\n";
            break;
        }

        cout << "\n";
    }

    return 0;
}
