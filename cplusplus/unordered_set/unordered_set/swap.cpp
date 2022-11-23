// cplusplus link https://cplusplus.com/reference/unordered_set\unordered_set\swap
// unordered_set::swap
#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    std::unordered_set<std::string>
        first = { "iron", "copper", "oil" },
        second = { "wood", "corn", "milk" };

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
