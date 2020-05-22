#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file ("file.txt"); // create file "file.txt"

    file << "Hello there";

    file.close();
    return 0;
}
