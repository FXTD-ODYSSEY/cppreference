// cppreference link https://en.cppreference.com/w/cpp/container/deque/assign
#include <deque>
#include <iostream>
#include <string>

int main()
{
    std::deque<char> characters;

    auto print_deque = [&]() {
        for (char c : characters)
            std::cout << c << ' ';
        std::cout << '\n';
    };

    characters.assign(5, 'a');
    print_deque();

    const std::string extra(6, 'b');
    characters.assign(extra.begin(), extra.end());
    print_deque();

    characters.assign({ 'C', '+', '+', '1', '1' });
    print_deque();
}
