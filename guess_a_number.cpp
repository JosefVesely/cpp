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
            cout << "Higher" << endl;
        }
        else if (guess > number) {
            cout << "Lower" << endl;
        }
        else {
            cout << "Congratulations! You guessed the number." << endl;
            cout << "Number is " << number << endl;
            break;
        }

        cout << endl;
    }

    return 0;
}
