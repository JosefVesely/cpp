#include <iostream>
#include <iomanip>

using namespace std;

/**
 * program for calculating pi using the Gregory-Leibniz series
 * pi = (4/1) - (4/3) + (4/5) - (4/7) + (4/9) - (4/11) ...
 */

int main()
{
    double pi = 0;
    cout << setprecision(16);

    for (double i = 1; 1; i+=2) {
        pi += 4 / i;
        i += 2;
        pi -= 4 / i;

        cout << pi << endl;
    }
    return 0;
}
