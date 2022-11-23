// cplusplus link https://cplusplus.com/reference/unordered_map\unordered_multimap\count
// unordered_multimap::count
#include <iostream>
#include <string>
#include <unordered_map>

int main()
{
    std::unordered_multimap<std::string, std::string> myumm = {
        { "orange", "FL" },
        { "strawberry", "LA" },
        { "strawberry", "OK" },
        { "pumpkin", "NH" }
    };

    for (auto& x : { "orange", "lemon", "strawberry" }) {
        std::cout << x << ": " << myumm.count(x) << " entries.\n";
    }

    return 0;
}
