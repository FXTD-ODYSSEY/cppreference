// cppreference link https://en.cppreference.com/w/cpp/container/unordered_set/max_size
#include <iostream>
#include <locale>
#include <unordered_set>

int main()
{
    std::unordered_set<char> q;
    std::cout.imbue(std::locale("en_US.UTF-8"));
    std::cout << "Maximum size of a std::unordered_set is " << q.max_size() << '\n';
}
