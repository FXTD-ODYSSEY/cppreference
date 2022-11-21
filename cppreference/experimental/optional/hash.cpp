// cppreference link https://en.cppreference.com/w/cpp/experimental/optional/hash
#include <experimental/optional>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std::literals;
int main()
{
    // hash<optional> makes it possible to use unordered_set
    std::unordered_set<std::experimental::optional<std::string>> s = {
        "abc"s, std::experimental::nullopt, "def"s
    };

    for (const auto& o : s)
        std::cout << o.value_or("(null)") << ' ';
}
