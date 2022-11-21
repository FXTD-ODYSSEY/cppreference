// cppreference link https://en.cppreference.com/w/cpp/string/basic_string_view/find
#include <string_view>

int main()
{
    using namespace std::literals;

    constexpr auto str { " long long int;"sv };

    static_assert(
        1 == str.find("long"sv) && "<- find(v , pos = 0)" && 6 == str.find("long"sv, 2) && "<- find(v , pos = 2)" && 0 == str.find(' ') && "<- find(ch, pos = 0)" && 2 == str.find('o', 1) && "<- find(ch, pos = 1)" && 2 == str.find("on") && "<- find(s , pos = 0)" && 6 == str.find("long double", 5, 4) && "<- find(s , pos = 5, count = 4)");

    static_assert(str.npos == str.find("float"));
}
