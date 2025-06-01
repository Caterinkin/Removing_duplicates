#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

int main() 
{
    setlocale(LC_ALL, "rus");
    int n;
    std::cout << "������� ���������� �����: ";
    std::cin >> n;

    // �������� �� ������������ �����
    if (std::cin.fail() || n <= 0) 
    {
        std::cerr << "������: ������� ����� ����� > 0!\n";
        return 1;
    }

    std::vector<int> numbers;
    std::unordered_set<int> unique_numbers;

    std::cout << "������� " << n << " ����� (����� ������ ��� Enter):\n";
    for (int i = 0; i < n; ++i)
    {
        int num;
        std::cin >> num;

        // ���� ����� ����������, ��������� � ������
        if (unique_numbers.insert(num).second) 
        {
            numbers.push_back(num);
        }
    }

    // ���������� �� ��������
    std::sort(numbers.begin(), numbers.end(), std::greater<int>());

    // ����� ����������
    std::cout << "��������� (��� ����������, �� ��������):\n";
    for (const auto& num : numbers) 
    {
        std::cout << num << "\n";
    }

    return 0;
}