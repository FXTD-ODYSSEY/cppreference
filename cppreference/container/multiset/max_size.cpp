// cppreference link https://en.cppreference.com/w/cpp/container/multiset/max_size
#include <iostream>
#include <locale>
#include <set>

int main()
{
    std::multiset<char> q;
    std::cout.imbue(std::locale("en_US.UTF-8"));
    std::cout << "Maximum size of a std::multiset is " << q.max_size() << '\n';
}
