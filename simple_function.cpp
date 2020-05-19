#include <iostream>
using namespace std;


float get_volume(float x, float y, float z)
{
    return x * y * z;
}


int main()
{
    cout << get_volume(2, 3, 2);
    return 0;
}
