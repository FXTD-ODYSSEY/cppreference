// cplusplus link https://cplusplus.com/reference/unordered_set\unordered_multiset\swap
// unordered_multiset::swap
#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    std::unordered_multiset<std::string>
        first = { "cow", "chicken", "pig", "pig" },
        second = { "wolf", "rabbit", "rabbit" };

    first.swap(second);

    std::cout << "first:";
    for (const std::string& x : first)
        std::cout << " " << x;
    std::cout << std::endl;

    std::cout << "second:";
    for (const std::string& x : second)
        std::cout << " " << x;
    std::cout << std::endl;

    return 0;
}
