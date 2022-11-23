// cplusplus link https://cplusplus.com/reference/unordered_set\unordered_multiset\swap%28global%29
// swap (unordered_multiset specialization)
#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    std::unordered_multiset<std::string>
        first = { "cow", "chicken", "pig", "pig" },
        second = { "wolf", "rabbit", "rabbit" };

    swap(first, second);

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
