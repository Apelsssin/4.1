#include <iostream>
#include <vector>

int main()
{
    setlocale(LC_ALL, "Russian");
    std::vector<int> V = { 4, 7, 9, 14, 12 };

    std::cout << "Входные данные: ";
    for (int& it : V) {
        std::cout << it << " ";
    }
    std::cout << std::endl;

    std::cout << "Выходные данные: ";
    [&V]() {
        for (int& it : V) {
            if (it % 2 != 0)
                it = it * 3;
            std::cout << it << " ";
        }
        std::cout << std::endl;
    }();
}