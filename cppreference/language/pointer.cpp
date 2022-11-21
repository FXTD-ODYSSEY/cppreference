// cppreference link https://en.cppreference.com/w/cpp/language/pointer
#include <algorithm>
#include <functional>
#include <iostream>
#include <string>

int main()
{
    std::vector<std::string> v = { "a", "ab", "abc" };
    std::vector<std::size_t> l;
    transform(v.begin(), v.end(), std::back_inserter(l),
        std::mem_fn(&std::string::size));
    for (std::size_t n : l)
        std::cout << n << ' ';
}
