#include <iostream>
using namespace std;

int main()
{
    int n, key;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter search key: ";
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element found at index " << i;
            return 0;
        }
    }
    cout << "Element not found.";
    return 0;
}