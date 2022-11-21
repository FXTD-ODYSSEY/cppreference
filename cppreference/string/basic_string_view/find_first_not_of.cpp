// cppreference link https://en.cppreference.com/w/cpp/string/basic_string_view/find_first_not_of
#include <string_view>
using namespace std::literals;

int main()
{
    static_assert(2 == "BCDEF"sv.find_first_not_of("ABC"));
    //    ^
    static_assert(4 == "BCDEF"sv.find_first_not_of("ABC", 4));
    //      ^
    static_assert(1 == "BCDEF"sv.find_first_not_of('B'));
    //   ^
    static_assert(3 == "BCDEF"sv.find_first_not_of('D', 2));
    //     ^
}
