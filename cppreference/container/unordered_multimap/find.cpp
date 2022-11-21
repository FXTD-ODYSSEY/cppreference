// cppreference link https://en.cppreference.com/w/cpp/container/unordered_multimap/find
#include <iostream>
#include <unordered_map>

int main()
{
    // simple comparison demo
    std::unordered_multimap<int, char> example = { { 1, 'a' }, { 2, 'b' } };

    if (auto search = example.find(2); search != example.end())
        std::cout << "Found " << search->first << " " << search->second << '\n';
    else
        std::cout << "Not found\n";
}
