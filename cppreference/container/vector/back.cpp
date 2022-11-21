// cppreference link https://en.cppreference.com/w/cpp/container/vector/back
#include <iostream>
#include <vector>

int main()
{
    std::vector<char> letters { 'a', 'b', 'c', 'd', 'e', 'f' };

    if (!letters.empty()) {
        std::cout << "The last character is '" << letters.back() << "'.\n";
    }
}
