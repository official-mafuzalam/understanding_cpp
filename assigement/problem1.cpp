#include <iostream>

using namespace std;

int addition(int num1, int num2)
{
    return num1 + num2;
}

int subtraction(int num1, int num2)
{
    return num1 - num2;
}

int multiplication(int num1, int num2)
{
    return num1 * num2;
}

float division(int num1, int num2)
{
    return (float)num1 / num2;
}

int main()
{
    int num1, num2;
    cout << "Enter first integer number: ";
    cin >> num1;

    cout << "Enter second integer number: ";
    cin >> num2;

    int sum, sub, multi;
    float div;

    sum = addition(num1, num2);
    sub = subtraction(num1, num2);
    multi = multiplication(num1, num2);
    div = division(num1, num2);

    cout << "Your entered number is: " << num1 << ", " << num2 << endl;
    cout << "Sum is: " << sum << endl;
    cout << "Subtraction is: " << sub << endl;
    cout << "Multiplication is: " << multi << endl;
    cout << "Division is: " << div << endl;

    return 0;
}