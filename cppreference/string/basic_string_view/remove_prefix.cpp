// cppreference link https://en.cppreference.com/w/cpp/string/basic_string_view/remove_prefix
#include <algorithm>
#include <iostream>
#include <string_view>
int main()
{
    std::string str = "   trim me";
    std::string_view v = str;
    v.remove_prefix(std::min(v.find_first_not_of(" "), v.size()));
    std::cout << "String: '" << str << "'\n"
              << "View : '" << v << "'\n";
}
