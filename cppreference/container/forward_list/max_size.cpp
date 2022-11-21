// cppreference link https://en.cppreference.com/w/cpp/container/forward_list/max_size
#include <forward_list>
#include <iostream>
#include <locale>

int main()
{
    std::forward_list<char> q;
    std::cout.imbue(std::locale("en_US.UTF-8"));
    std::cout << "Maximum size of a std::forward_list is " << q.max_size() << '\n';
}
