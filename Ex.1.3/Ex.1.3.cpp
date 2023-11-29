#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    double arr[] = { 3.2, -1.5, 0, 4.7, -2.1, 0, 1.8, 5.6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j;

    // Find the minimum element
    double min = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    std::cout << "The minimum element is " << min << endl;

    // Find the sum of elements between the first and last positive elements
    double sum = 0;
    int first_pos = -1, last_pos = -1;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            if (first_pos == -1)
            {
                first_pos = i;
            }
            last_pos = i;
        }
        if (first_pos != -1 && i > first_pos && i < last_pos)
        {
            sum += arr[i];
        }
    }
    cout << "The sum of elements between the first and last positive elements is " << sum << endl;

    // Transform the array so that all zero elements are located first, and then all others
    sort(arr, arr + n, [](double a, double b) {
        return abs(a) < abs(b);
        });

    std::cout << "The sorted array is: ";
    for (i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << endl;

    return 0;
}
