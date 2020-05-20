#include <iostream>
#include <vector>
using namespace std;


void linear_search(vector<int> numbers, int value)
{
    bool found;
    int pos;

    for(int x = 0; x < numbers.size(); x++) {
        if(numbers[x] == value) {
            found = true;
            pos = x + 1;
            break;
        }
    }

    if (found == true) {
        cout << "Element found at position " << pos;
    }
    else {
        cout << "Element not found";
    }
}


int main()
{
    vector<int> numbers = {8, 3, 20, 56, 42, 33};

    linear_search(numbers, 42);

    return 0;
}
