#include <iostream>

using namespace std;

int plusFunc(int num1, int num2);
float plusFunc(float num1);

int main()
{
    int num1 = plusFunc(5, 6);
    int num2 = plusFunc(5);

    cout << num1 << "\n";
    cout << num2;

    return 0;
}

int plusFunc(int num1, int num2)
{
    return num1 + num2;
}

float plusFunc(float num1)
{
    return num1;
}
