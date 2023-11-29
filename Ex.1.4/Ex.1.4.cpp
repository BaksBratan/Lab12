#include <iostream>

int main() {
    const int size = 10; // Замініть розмір масиву за потреби
    int array[size];

    // Заповнення масиву (для прикладу)
    std::cout << "Enter " << size << " integer values:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> array[i];
    }

    // Знайдення номера максимального елемента
    int maxIndex = 0;
    for (int i = 1; i < size; ++i) {
        if (array[i] > array[maxIndex]) {
            maxIndex = i;
        }
    }

    std::cout << "Index of the maximum element: " << maxIndex << std::endl;

    // Знайдення добутку елементів між першим і другим нульовими елементами
    int firstZeroIndex = -1;
    int secondZeroIndex = -1;

    for (int i = 0; i < size; ++i) {
        if (array[i] == 0) {
            if (firstZeroIndex == -1) {
                firstZeroIndex = i;
            }
            else {
                secondZeroIndex = i;
                break;
            }
        }
    }

    int product = 1;
    if (firstZeroIndex != -1 && secondZeroIndex != -1) {
        for (int i = firstZeroIndex + 1; i < secondZeroIndex; ++i) {
            product *= array[i];
        }
    }

    std::cout << "Product between the first two zeros: " << product << std::endl;

    // Перетворення масиву
    int newArray[size];
    int j = 0;

    for (int i = 1; i < size; i += 2) {
        newArray[j++] = array[i];
    }

    for (int i = 0; i < size; i += 2) {
        newArray[j++] = array[i];
    }

    // Виведення результатів
    std::cout << "Transformed array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << newArray[i] << " ";
    }

    return 0;
}