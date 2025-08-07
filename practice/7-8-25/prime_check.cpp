#include <iostream>
using namespace std;

int main()
{
    int n, isPrime = 1;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 2)
        isPrime = 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
        cout << n << " is a prime number.";
    else
        cout << n << " is not a prime number.";
    return 0;
}