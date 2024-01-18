#include <iostream>

using namespace std;

int avg()
{
    int sum = 0;
    int numbers[10];

    cout << "Enter 10 integer numbers: " << endl;

    for (int i = 0; i < 10; i++)
    {
        cin >> numbers[i];
    }

    for (int i = 0; i < 10; i++)
    {
        sum = sum + numbers[i];
    }

    return sum / 10;
}

int main()
{
    int average = avg();

    cout << "Your inputted numbers average is: " << average;

    return 0;
}