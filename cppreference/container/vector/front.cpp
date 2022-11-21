// cppreference link https://en.cppreference.com/w/cpp/container/vector/front
#include <iostream>
#include <vector>

int main()
{
    std::vector<char> letters { 'o', 'm', 'g', 'w', 't', 'f' };

    if (!letters.empty()) {
        std::cout << "The first character is '" << letters.front() << "'.\n";
    }
}
