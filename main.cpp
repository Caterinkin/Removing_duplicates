#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

int main() 
{
    setlocale(LC_ALL, "rus");
    int n;
    std::cout << "Введите количество чисел: ";
    std::cin >> n;

    // Проверка на корректность ввода
    if (std::cin.fail() || n <= 0) 
    {
        std::cerr << "Ошибка: введите целое число > 0!\n";
        return 1;
    }

    std::vector<int> numbers;
    std::unordered_set<int> unique_numbers;

    std::cout << "Введите " << n << " чисел (через пробел или Enter):\n";
    for (int i = 0; i < n; ++i)
    {
        int num;
        std::cin >> num;

        // Если число уникальное, добавляем в вектор
        if (unique_numbers.insert(num).second) 
        {
            numbers.push_back(num);
        }
    }

    // Сортировка по убыванию
    std::sort(numbers.begin(), numbers.end(), std::greater<int>());

    // Вывод результата
    std::cout << "Результат (без дубликатов, по убыванию):\n";
    for (const auto& num : numbers) 
    {
        std::cout << num << "\n";
    }

    return 0;
}