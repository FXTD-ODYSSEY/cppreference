// cppreference link https://en.cppreference.com/w/cpp/experimental/basic_string_view/remove_prefix
#include <experimental/string_view>
#include <iostream>
int main()
{
    std::string str = "   trim me";
    std::experimental::string_view v = str;
    v.remove_prefix(std::min(v.find_first_not_of(" "), v.size()));
    std::cout << "String: '" << str << "'\n"
              << "View : '" << v << "'\n";
}
