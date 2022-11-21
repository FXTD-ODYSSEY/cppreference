// cppreference link https://en.cppreference.com/w/cpp/container/unordered_map/max_size
#include <iostream>
#include <locale>
#include <unordered_map>

int main()
{
    std::unordered_map<char, char> q;
    std::cout.imbue(std::locale("en_US.UTF-8"));
    std::cout << "Maximum size of a std::unordered_map is " << q.max_size() << '\n';
}
