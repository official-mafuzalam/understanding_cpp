#include <iostream>

using namespace std;

int maximum(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

int minimum(int num1, int num2)
{
    if (num1 < num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

int main()
{
    int num1, num2;
    cout << "Enter first integer number: ";
    cin >> num1;

    cout << "Enter second integer number: ";
    cin >> num2;

    int max, min;

    max = maximum(num1, num2);
    min = minimum(num1, num2);

    cout << "Your entered number is: " << num1 << ", " << num2 << endl;

    cout << "Maximum number is: " << max << endl;
    cout << "Minimum number is: " << min << endl;

    return 0;
}