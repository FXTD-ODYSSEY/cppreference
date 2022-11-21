// cppreference link https://en.cppreference.com/w/cpp/container/set/max_size
#include <iostream>
#include <locale>
#include <set>

int main()
{
    std::set<char> q;
    std::cout.imbue(std::locale("en_US.UTF-8"));
    std::cout << "Maximum size of a std::set is " << q.max_size() << '\n';
}
