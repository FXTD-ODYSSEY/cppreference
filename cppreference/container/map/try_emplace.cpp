// cppreference link https://en.cppreference.com/w/cpp/container/map/try_emplace
#include <iostream>
#include <string>
#include <utility>

#include <map>

auto print_node = [](const auto& node) {
    std::cout << "[" << node.first << "] = " << node.second << '\n';
};

auto print_result = [](auto const& pair) {
    std::cout << (pair.second ? "inserted: " : "ignored:  ");
    print_node(*pair.first);
};

int main()
{
    using namespace std::literals;
    std::map<std::string, std::string> m;

    print_result(m.try_emplace("a", "a"s));
    print_result(m.try_emplace("b", "abcd"));
    print_result(m.try_emplace("c", 10, 'c'));
    print_result(m.try_emplace("c", "Won't be inserted"));

    for (const auto& p : m) {
        print_node(p);
    }
}
