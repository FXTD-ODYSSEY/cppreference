// cplusplus link https://cplusplus.com/reference/unordered_map\unordered_multimap\insert
// unordered_multimap::insert
#include <iostream>
#include <string>
#include <unordered_map>

int main()
{
    std::unordered_multimap<std::string, int>
        first,
        second = { { "AAPL", 200 }, { "GOOG", 100 } };

    std::pair<std::string, int> mypair("MSFT", 500);

    first.insert(mypair); // copy insertion
    first.insert(std::make_pair<std::string, int>("GOOG", 50)); // move insertion
    first.insert(second.begin(), second.end()); // range insertion
    first.insert({ { "ORCL", 100 }, { "GOOG", 100 } }); // initializer list insertion

    std::cout << "first contains:" << std::endl;
    for (auto& x : first)
        std::cout << x.first << ": " << x.second << std::endl;

    std::cout << std::endl;
    return 0;
}
