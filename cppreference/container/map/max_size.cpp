// cppreference link https://en.cppreference.com/w/cpp/container/map/max_size
#include <iostream>
#include <locale>
#include <map>

int main()
{
    std::map<char, char> q;
    std::cout.imbue(std::locale("en_US.UTF-8"));
    std::cout << "Maximum size of a std::map is " << q.max_size() << '\n';
}
