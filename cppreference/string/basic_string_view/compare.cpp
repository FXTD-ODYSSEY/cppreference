// cppreference link https://en.cppreference.com/w/cpp/string/basic_string_view/compare
#include <string_view>

int main()
{
    using std::operator""sv;
    static_assert("abc"sv.compare("abcd"sv) < 0);
    static_assert("abcd"sv.compare("abc"sv) > 0);
    static_assert("abc"sv.compare("abc"sv) == 0);
    static_assert(""sv.compare(""sv) == 0);
}
