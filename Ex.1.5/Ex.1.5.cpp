#include <iostream>
#include <algorithm>

int main() {
    const int size = 10; // ������ ����� ������ �� �������
    double array[size];

    // ���������� ������ (��� ��������)
    std::cout << "Enter " << size << " real values:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> array[i];
    }

    // ��������� ������� �������� ��������
    double positiveProduct = 1;
    for (int i = 0; i < size; ++i) {
        if (array[i] > 0) {
            positiveProduct *= array[i];
        }
    }

    std::cout << "Product of positive elements: " << positiveProduct << std::endl;

    // ��������� ���������� �������� �� ���� �������� �� ����������
    int minIndex = std::min_element(array, array + size) - array;

    double sumBeforeMin = 0;
    for (int i = 0; i < minIndex; ++i) {
        sumBeforeMin += array[i];
    }

    std::cout << "Sum of elements before the minimum element: " << sumBeforeMin << std::endl;

    // ������������� �������� �� ����������
    std::sort(array, array + size);

    // ������������� ������ ������ � �������� ��������
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

    // ��������� ����������
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