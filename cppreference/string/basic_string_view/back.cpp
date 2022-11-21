// cppreference link https://en.cppreference.com/w/cpp/string/basic_string_view/back
#include <iostream>
#include <string_view>

int main()
{
    for (std::string_view str { "ABCDEF" }; !str.empty(); str.remove_suffix(1))
        std::cout << str.back() << ' ' << str << '\n';
}
