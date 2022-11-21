// cppreference link https://en.cppreference.com/w/cpp/string/basic_string/hash
#include <functional>
#include <iostream>
#include <memory_resource>
#include <string>
#include <string_view>
using namespace std::literals;

int main()
{
    auto sv = "Stand back! I've got jimmies!"sv;
    std::string s(sv);
    std::pmr::string pmrs(sv); // use default allocator

    std::cout << std::hash<std::string_view> {}(sv) << '\n';
    std::cout << std::hash<std::string> {}(s) << '\n';
    std::cout << std::hash<std::pmr::string> {}(pmrs) << '\n';
}
