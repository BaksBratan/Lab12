#include <iostream>
using namespace std;

int main()
{
    int arr[] = { 1, 2, 3, 0, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            cout << "The first zero element is at index " << i << endl;
            break;
        }
    }

    if (i == n)
    {
        cout << "The array does not contain any zero elements." << endl;
    }

    return 0;
}