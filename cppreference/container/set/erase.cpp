// cppreference link https://en.cppreference.com/w/cpp/container/set/erase
#include <iostream>
#include <set>

int main()
{
    std::set<int> c = { 1, 2, 3, 4, 1, 2, 3, 4 };

    auto print = [&c] {
        std::cout << "c = { ";
        for (int n : c)
            std::cout << n << ' ';
        std::cout << "}\n";
    };
    print();

    std::cout << "Erase all odd numbers:\n";
    for (auto it = c.begin(); it != c.end();) {
        if (*it % 2 != 0)
            it = c.erase(it);
        else
            ++it;
    }
    print();

    std::cout << "Erase 1, erased count: " << c.erase(1) << '\n';
    std::cout << "Erase 2, erased count: " << c.erase(2) << '\n';
    std::cout << "Erase 2, erased count: " << c.erase(2) << '\n';
    print();
}
