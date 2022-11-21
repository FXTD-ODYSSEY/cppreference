// cppreference link https://en.cppreference.com/w/cpp/container/array/max_size
#include <array>
#include <iostream>
#include <locale>

int main()
{
    std::array<char, 10> q;
    std::cout.imbue(std::locale("en_US.UTF-8"));
    std::cout << "Maximum size of the std::array is " << q.max_size() << '\n';
}
