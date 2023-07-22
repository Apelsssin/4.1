#include <iostream>
#include <vector>
#include <algorithm>

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
    std::for_each(V.begin(), V.end(), [](int &n) { //});
            if (n % 2 != 0)
                n = n * 3;
            std::cout << n << " ";
    });
}