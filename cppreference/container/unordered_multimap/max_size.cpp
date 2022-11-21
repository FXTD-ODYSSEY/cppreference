// cppreference link https://en.cppreference.com/w/cpp/container/unordered_multimap/max_size
#include <iostream>
#include <locale>
#include <unordered_map>

int main()
{
    std::unordered_multimap<char, char> q;
    std::cout.imbue(std::locale("en_US.UTF-8"));
    std::cout << "Maximum size of a std::unordered_multimap is " << q.max_size() << '\n';
}
