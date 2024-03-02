#include <iostream>

using namespace std;

int main()
{
    int row, column;

    cout << "Enter row number: ";
    cin >> row;
    cout << "Enter column number: ";
    cin >> column;

    // for (int i = 0; i < column; i++)
    // {
    //     for (int j = 0; j < row; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << "\n";
    // }

    // cout << "\n\n\n\n";

    for (int i = 1; i <= row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
