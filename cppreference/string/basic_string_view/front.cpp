// cppreference link https://en.cppreference.com/w/cpp/string/basic_string_view/front
#include <iostream>
#include <string_view>

int main()
{
    for (std::string_view str { "ABCDEF" }; !str.empty(); str.remove_prefix(1))
        std::cout << str.front() << ' ' << str << '\n';
}
