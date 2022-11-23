// cplusplus link https://cplusplus.com/reference/unordered_set\unordered_set\swap%28global%29
// swap (unordered_set specialization)
#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    std::unordered_set<std::string>
        first = { "Metropolis", "Solaris", "Westworld" },
        second = { "Avatar", "Inception" };

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
