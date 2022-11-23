// cplusplus link https://cplusplus.com/reference/unordered_map\unordered_multimap\operators
// unordered_multimap comparisons
#include <iostream>
#include <string>
#include <unordered_map>

typedef std::unordered_multimap<std::string, int> stringmap;

int main()
{
    stringmap a = { { "AAPL", 100 }, { "MSFT", 200 }, { "GOOG", 50 }, { "GOOG", 20 } };
    stringmap b = { { "GOOG", 20 }, { "MSFT", 200 }, { "AAPL", 100 }, { "GOOG", 50 } };
    stringmap c = { { "GOOG", 70 }, { "MSFT", 200 }, { "AAPL", 100 } };

    if (a == b)
        std::cout << "a and b are equal\n";
    if (b != c)
        std::cout << "b and c are not equal\n";

    return 0;
}
