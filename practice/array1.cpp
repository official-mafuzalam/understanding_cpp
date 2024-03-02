#include <iostream>

using namespace std;

int main()
{
    int numbers[10] = {10, 15, 20, 30, 22, 12, 36, 2, 41, 23};

    // Bubble Sort Algorithm
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                // Swapping the elements if they are in the wrong order
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Printing the sorted array
    for (int i = 0; i < 10; i++)
    {
        cout << numbers[i] << ", ";
    }

    return 0;
}
