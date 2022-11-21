// cppreference link https://en.cppreference.com/w/cpp/container/list/front
#include <iostream>
#include <list>

int main()
{
    std::list<char> letters { 'o', 'm', 'g', 'w', 't', 'f' };

    if (!letters.empty()) {
        std::cout << "The first character is '" << letters.front() << "'.\n";
    }
}
