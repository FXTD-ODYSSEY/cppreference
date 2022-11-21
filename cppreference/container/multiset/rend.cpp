// cppreference link https://en.cppreference.com/w/cpp/container/multiset/rend
#include <iostream>
#include <set>

int main()
{
    std::multiset<unsigned> rep { 1, 2, 3, 4, 1, 2, 3, 4 };

    for (auto it = rep.crbegin(); it != rep.crend(); ++it) {
        for (auto n = *it; n > 0; --n)
            std::cout << "⏼" << ' ';
        std::cout << '\n';
    }
}
