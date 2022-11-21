// cppreference link https://en.cppreference.com/w/cpp/container/array/front
#include <array>
#include <iostream>

int main()
{
    std::array<char, 6> letters { 'o', 'm', 'g', 'w', 't', 'f' };

    if (!letters.empty()) {
        std::cout << "The first character is '" << letters.front() << "'.\n";
    }
}
