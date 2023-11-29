#include <iostream>
#include <algorithm>

int main() {
    const int size = 10; // Замініть розмір масиву за потреби
    double array[size];

    // Заповнення масиву (для прикладу)
    std::cout << "Enter " << size << " real values:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> array[i];
    }

    // Знайдення добутку додатних елементів
    double positiveProduct = 1;
    for (int i = 0; i < size; ++i) {
        if (array[i] > 0) {
            positiveProduct *= array[i];
        }
    }

    std::cout << "Product of positive elements: " << positiveProduct << std::endl;

    // Знайдення мінімального елемента та суми елементів до мінімального
    int minIndex = std::min_element(array, array + size) - array;

    double sumBeforeMin = 0;
    for (int i = 0; i < minIndex; ++i) {
        sumBeforeMin += array[i];
    }

    std::cout << "Sum of elements before the minimum element: " << sumBeforeMin << std::endl;

    // Упорядкування елементів за зростанням
    std::sort(array, array + size);

    // Упорядкування окремо парних і непарних елементів
    double evenArray[size / 2], oddArray[size / 2];
    int evenIndex = 0, oddIndex = 0;

    for (int i = 0; i < size; ++i) {
        if (i % 2 == 0) {
            evenArray[evenIndex++] = array[i];
        }
        else {
            oddArray[oddIndex++] = array[i];
        }
    }

    // Виведення результатів
    std::cout << "Sorted array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }

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