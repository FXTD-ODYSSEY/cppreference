// cppreference link https://en.cppreference.com/w/cpp/container/list/back
#include <iostream>
#include <list>

int main()
{
    std::list<char> letters { 'a', 'b', 'c', 'd', 'e', 'f' };

    if (!letters.empty()) {
        std::cout << "The last character is '" << letters.back() << "'.\n";
    }
}
