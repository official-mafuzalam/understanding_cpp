#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Maximum is: " << (a > b ? a : b);
    return 0;
}