// cplusplus link https://cplusplus.com/reference/unordered_set\unordered_multiset\count
// unordered_multiset::count
#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    std::unordered_multiset<std::string> myums = { "cow", "pig", "chicken", "pig", "pig", "cow" };

    for (auto& x : { "cow", "sheep", "pig" }) {
        std::cout << x << ": " << myums.count(x) << std::endl;
    }

    return 0;
}
