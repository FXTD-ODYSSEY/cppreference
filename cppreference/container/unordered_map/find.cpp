// cppreference link https://en.cppreference.com/w/cpp/container/unordered_map/find
#include <cstddef>
#include <functional>
#include <iostream>
#include <string>
#include <string_view>
#include <unordered_map>

using namespace std::literals;

struct string_hash {
    using hash_type = std::hash<std::string_view>;
    using is_transparent = void;

    std::size_t operator()(const char* str) const { return hash_type {}(str); }
    std::size_t operator()(std::string_view str) const { return hash_type {}(str); }
    std::size_t operator()(std::string const& str) const { return hash_type {}(str); }
};

int main()
{
    // simple comparison demo
    std::unordered_map<int, char> example = { { 1, 'a' }, { 2, 'b' } };

    if (auto search = example.find(2); search != example.end())
        std::cout << "Found " << search->first << " " << search->second << '\n';
    else
        std::cout << "Not found\n";

    // C++20 demo: Heterogeneous lookup for unordered containers (transparent hashing)
    std::unordered_map<std::string, size_t, string_hash, std::equal_to<>> map { { "one"s, 1 } };
    std::cout << std::boolalpha
              << (map.find("one") != map.end()) << '\n'
              << (map.find("one"s) != map.end()) << '\n'
              << (map.find("one"sv) != map.end()) << '\n';
}
