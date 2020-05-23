#include <iostream>
using namespace std;

string reverse(string str)
{
    string reversed;

    for (int i = str.length()-1; i >= 0; i--)
        reversed += str[i];

    return reversed;
}


int main() {
    string word;
    cin >> word;

    cout << reverse(word);
    return 0;
}
