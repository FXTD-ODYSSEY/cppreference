// cppreference link https://en.cppreference.com/w/cpp/container/multimap/rbegin
#include <algorithm>
#include <iostream>
#include <map>
#include <string>

int main()
{
    std::multimap<std::string, int> multimap {
        { "█", 1 },
        { "▒", 5 },
        { "░", 3 },
        { "▓", 7 },
        { "▓", 8 },
        { "░", 4 },
        { "▒", 6 },
        { "█", 2 },
    };

    std::cout << "Print out in reverse order using const reverse iterators:\n";
    std::for_each(multimap.crbegin(), multimap.crend(),
        [](std::pair<const std::string, int> const& e) {
            std::cout << "{ \"" << e.first << "\", " << e.second << " };\n";
        });

    multimap.rbegin()->second = 42; // OK: non-const value is modifiable
    //  multimap.crbegin()->second = 42; // Error: can't modify the const value
}
