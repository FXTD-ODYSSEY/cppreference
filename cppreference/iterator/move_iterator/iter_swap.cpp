// cppreference link https://en.cppreference.com/w/cpp/iterator/move_iterator/iter_swap
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> p { "AA", "EE" },
        q { "ⱯⱯ", "ƎƎ" };

    std::move_iterator<std::vector<std::string>::iterator>
        x = std::make_move_iterator(p.begin()),
        y = std::make_move_iterator(q.begin());

    std::cout << *x << ' ' << *y << '\n';

    iter_swap(x, y); // ADL

    std::cout << *x << ' ' << *y << '\n';
}
