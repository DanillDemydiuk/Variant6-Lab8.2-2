#include <iostream>
#include <clocale> // 
int main() {
    setlocale(LC_ALL, "ukr");

    const int n = 15; // Определение размера массивов
    int a[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 }; // Массив a
    int b[n] = { 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 }; // Массив b

    // Вывод результатов
    std::cout << "Результаты:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "a" << i + 1 << " + b" << n - i << " = " << a[i] + b[n - i - 1] << std::endl;
    }

    return 0;
}

