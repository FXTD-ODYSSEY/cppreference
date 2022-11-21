// cppreference link https://en.cppreference.com/w/cpp/container/forward_list/assign
#include <forward_list>
#include <iostream>
#include <string>

int main()
{
    std::forward_list<char> characters;

    auto print_forward_list = [&]() {
        for (char c : characters)
            std::cout << c << ' ';
        std::cout << '\n';
    };

    characters.assign(5, 'a');
    print_forward_list();

    const std::string extra(6, 'b');
    characters.assign(extra.begin(), extra.end());
    print_forward_list();

    characters.assign({ 'C', '+', '+', '1', '1' });
    print_forward_list();
}
