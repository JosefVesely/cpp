#include<iostream>
using namespace std;


int linear_search(int arr[], int value)
{
    int length = sizeof(arr) + 1;

    for(int x = 0; x < length; x++) {
        if(arr[x] == value) {
            cout << "Element's position is: " << x;
            return 0;
        }
	}
	cout << "Element not found";
}


int main()
{
	int numbers[] = {1, 3, 8, 14, 17, 24, 39, 42, 55};

    linear_search(numbers, 42);

	return 0;
}
