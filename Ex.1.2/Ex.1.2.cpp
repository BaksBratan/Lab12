#include <iostream>
using namespace std;

int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i < n - 1; i++)
    {
        arr[i] = (arr[i - 1] + arr[i + 1]) / 2;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}