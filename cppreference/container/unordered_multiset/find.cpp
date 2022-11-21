// cppreference link https://en.cppreference.com/w/cpp/container/unordered_multiset/find
#include <iostream>
#include <unordered_set>

int main()
{
    // simple comparison demo
    std::unordered_multiset<int> example = { 1, 2, 3, 4 };

    if (auto search = example.find(2); search != example.end())
        std::cout << "Found " << (*search) << '\n';
    else
        std::cout << "Not found\n";
}
