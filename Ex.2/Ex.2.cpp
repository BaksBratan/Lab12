#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

// Функція для знаходження неперервних ділянок з сумою 0
void findSubarraysWithZeroSum(const std::vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n; ++i) {
        int currentSum = 0;

        for (int j = i; j < n; ++j) {
            currentSum += arr[j];

            if (currentSum == 0) {
                std::cout << "Continuous plot with sum 0: ";
                for (int k = i; k <= j; ++k) {
                    std::cout << arr[k] << " ";
                }
                std::cout << std::endl;
            }
        }
    }
}

int main() {
    const int size = 300;
    const int minValue = -100;
    const int maxValue = 100;

    // Ініціалізація генератора випадкових чисел
    std::srand(std::time(0));

    // Заповнення масиву випадковими значеннями у вказаному діапазоні
    std::vector<int> array(size);
    for (int i = 0; i < size; ++i) {
        array[i] = std::rand() % (maxValue - minValue + 1) + minValue;
    }

    // Виведення вмісту масиву
    std::cout << "Massif: ";
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    // Пошук неперервних ділянок з сумою 0
    findSubarraysWithZeroSum(array);

    return 0;
}