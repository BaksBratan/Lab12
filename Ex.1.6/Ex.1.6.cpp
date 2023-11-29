#include <iostream>
#include <algorithm>

int main() {
    const int size = 10; // Replace the array size as needed
    double array[size];

    // Filling the array (for example)
    std::cout << "Enter " << size << " real values:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> array[i];
    }

    double A, B;

    // Entering values for A and B
    std::cout << "Enter the range [A, B]:" << std::endl;
    std::cout << "A: ";
    std::cin >> A;
    std::cout << "B: ";
    std::cin >> B;

    // Counting elements in the range [A, B]
    int countInRange = std::count_if(array, array + size, [A, B](double x) {
        return x >= A && x <= B;
        });

    std::cout << "Number of elements in the range [" << A << ", " << B << "]: " << countInRange << std::endl;

    // Finding the maximum element and the sum of elements after it
    auto maxElement = std::max_element(array, array + size);
    int maxIndex = std::distance(array, maxElement);

    double sumAfterMax = 0;
    for (int i = maxIndex + 1; i < size; ++i) {
        sumAfterMax += array[i];
    }

    std::cout << "Sum of elements after the maximum element: " << sumAfterMax << std::endl;

    // Sorting elements in descending order of absolute values
    std::sort(array, array + size, [](double a, double b) {
        return std::abs(a) > std::abs(b);
        });

    // Outputting the sorted array by absolute values in descending order
    std::cout << "Sorted array by absolute values in descending order:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }

    // Separating even and odd elements
    double evenArray[size / 2];
    double oddArray[size / 2];
    int evenIndex = 0, oddIndex = 0;

    for (int i = 0; i < size; ++i) {
        if (i % 2 == 0) {
            evenArray[evenIndex++] = array[i];
        }
        else {
            oddArray[oddIndex++] = array[i];
        }
    }

    // Sorting even and odd elements separately
    std::sort(evenArray, evenArray + size / 2);
    std::sort(oddArray, oddArray + size / 2);

    // Outputting the sorted even and odd elements
    std::cout << "\nSorted even elements:" << std::endl;
    for (int i = 0; i < size / 2; ++i) {
        std::cout << evenArray[i] << " ";
    }

    std::cout << "\nSorted odd elements:" << std::endl;
    for (int i = 0; i < size / 2; ++i) {
        std::cout << oddArray[i] << " ";
    }

    return 0;
}