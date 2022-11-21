// cppreference link https://en.cppreference.com/w/cpp/container/vector/assign
#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<char> characters;

    auto print_vector = [&]() {
        for (char c : characters)
            std::cout << c << ' ';
        std::cout << '\n';
    };

    characters.assign(5, 'a');
    print_vector();

    const std::string extra(6, 'b');
    characters.assign(extra.begin(), extra.end());
    print_vector();

    characters.assign({ 'C', '+', '+', '1', '1' });
    print_vector();
}
