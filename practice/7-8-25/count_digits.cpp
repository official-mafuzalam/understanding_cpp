#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cout << "Enter a number: ";
    cin >> n;
    if (n == 0)
        count = 1;
    while (n != 0)
    {
        n /= 10;
        count++;
    }
    cout << "Number of digits: " << count;
    return 0;
}