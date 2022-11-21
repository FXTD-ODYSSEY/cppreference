// cppreference link https://en.cppreference.com/w/cpp/container/unordered_map/count
#include <iostream>
#include <string>
#include <unordered_map>

int main()
{
    std::unordered_map<int, std::string> dict = {
        { 1, "one" }, { 6, "six" }, { 3, "three" }
    };
    dict.insert({ 4, "four" });
    dict.insert({ 5, "five" });
    dict.insert({ 6, "six" });

    std::cout << "dict: { ";
    for (auto const& [key, value] : dict) {
        std::cout << "[" << key << "]=" << value << " ";
    }
    std::cout << "}\n\n";

    for (int i { 1 }; i != 8; ++i) {
        std::cout << "dict.count(" << i << ") = " << dict.count(i) << '\n';
    }
}
