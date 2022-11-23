// cplusplus link https://cplusplus.com/reference/unordered_map\unordered_multimap\operator%3D
// unordered_multimap::operator=
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

typedef std::unordered_multimap<std::string, std::string> stringmap;

stringmap merge(stringmap a, stringmap b)
{
    stringmap temp(a);
    temp.insert(b.begin(), b.end());
    return temp;
}

int main()
{
    stringmap first, second, third;
    first = { { "apple", "red" }, { "lemon", "yellow" } }; // init list
    second = { { "banana", "yellow" }, { "apple", "green" } }; // init list
    third = merge(first, second); // move
    first = third; // copy

    std::cout << "first contains:";
    for (auto& elem : first)
        std::cout << " " << elem.first << ":" << elem.second;
    std::cout << std::endl;

    return 0;
}
