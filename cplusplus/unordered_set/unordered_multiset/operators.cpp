// cplusplus link https://cplusplus.com/reference/unordered_set\unordered_multiset\operators
// unordered_multiset comparisons
#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    std::unordered_multiset<std::string>
        a = { "AAPL", "MSFT", "GOOG" },
        b = { "MSFT", "GOOG", "AAPL" },
        c = { "MSFT", "GOOG", "AAPL", "AAPL" };

    if (a == b)
        std::cout << "a and b are equal\n";
    if (b != c)
        std::cout << "b and c are not equal\n";

    return 0;
}
