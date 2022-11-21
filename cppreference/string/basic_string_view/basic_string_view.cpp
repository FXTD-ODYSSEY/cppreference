// cppreference link https://en.cppreference.com/w/cpp/string/basic_string_view/basic_string_view
#include <array>
#include <iomanip>
#include <iostream>
#include <string>
#include <string_view>

int main()
{
    std::string cppstr = "Foo";
    std::string_view cppstr_v(cppstr); // overload (2), after
                                       // std::string::operator string_view
    std::cout << "1) cppstr_v: " << quoted(cppstr_v) << '\n';

    char array[3] = { 'B', 'a', 'r' };
    std::string_view array_v(array, std::size(array)); // overload (3)
    std::cout << "2) array_v: " << quoted(array_v) << '\n';

    const char* one_0_two = "One\0Two";

    std::string_view one_two_v { one_0_two, 7 }; // overload (3)
    std::cout << "3) one_two_v: \"";
    for (char c : one_two_v) {
        std::cout << (c != '\0' ? c : '?');
    }
    std::cout << "\", one_two_v.size(): " << one_two_v.size() << '\n';

    std::string_view one_v { one_0_two }; // overload (4)
    std::cout << "4) one_v: " << quoted(one_v) << ", one_v.size(): "
              << one_v.size() << '\n';

    constexpr std::wstring_view wcstr_v = L"xyzzy"; // overload (4)
    std::cout << "5) wcstr_v.size(): " << wcstr_v.size() << '\n';

    std::array ar = { 'P', 'u', 'b' };
    std::string_view ar_v(ar.begin(), ar.end()); // overload (5), C++20
    std::cout << "6) ar_v: " << quoted(ar_v) << '\n';

    //  std::string_view ar_v2{ar}; // overload (6), OK in C++23
    //  std::cout << "ar_v2: " << quoted( ar_v2 ) << '\n'; // ar_v2: "Pub"

    [[maybe_unused]] auto zero = [] { /* ... */ return nullptr; };
    //  std::string_view s{ zero() }; // overload (7), won't compile since C++23
}
