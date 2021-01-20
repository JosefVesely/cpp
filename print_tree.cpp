#include <iostream>
using std::cout;

void print_tree(int height)
{
	if (height < 4)
	{
		cout << "Your tree must be higher than 3 characters!\n";
		return;
	}

	for (int i = 1; i <= height; i++)
	{
		for (int n = 0; n < height - i; n++) {
			cout << ' ';
		}
		for (int n = 0; n < i; n++) {
			cout << "* ";
		}
		cout << '\n';
	}
	for (int i = 0; i < height - 1; i++) {
		cout << ' ';
	}
	cout << "|\n";
}

int main()
{
	print_tree(6);
}
