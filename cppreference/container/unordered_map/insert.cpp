// cppreference link https://en.cppreference.com/w/cpp/container/unordered_map/insert
#include <iostream>
#include <string>
#include <unordered_map>

int main()
{
    std::unordered_map<int, std::string> dict = { { 1, "one" }, { 2, "two" } };
    dict.insert({ 3, "three" });
    dict.insert(std::make_pair(4, "four"));
    dict.insert({ { 4, "another four" }, { 5, "five" } });

    bool ok = dict.insert({ 1, "another one" }).second;
    std::cout << "inserting 1 -> \"another one\" "
              << (ok ? "succeeded" : "failed") << '\n';

    std::cout << "contents:\n";
    for (auto& p : dict)
        std::cout << " " << p.first << " => " << p.second << '\n';
}
