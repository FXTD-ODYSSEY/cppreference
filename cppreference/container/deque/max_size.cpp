// cppreference link https://en.cppreference.com/w/cpp/container/deque/max_size
#include <deque>
#include <iostream>
#include <locale>

int main()
{
    std::deque<char> q;
    std::cout.imbue(std::locale("en_US.UTF-8"));
    std::cout << "Maximum size of a std::deque is " << q.max_size() << '\n';
}
