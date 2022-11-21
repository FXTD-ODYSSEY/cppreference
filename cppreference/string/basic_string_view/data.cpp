// cppreference link https://en.cppreference.com/w/cpp/string/basic_string_view/data
#include <cstring>
#include <cwchar>
#include <iostream>
#include <string>
#include <string_view>
int main()
{
    std::wstring_view wcstr_v = L"xyzzy";
    std::cout << std::wcslen(wcstr_v.data()) << '\n';
    // OK: the underlying character array is null-terminated

    char array[3] = { 'B', 'a', 'r' };
    std::string_view array_v(array, sizeof array);
    // std::cout << std::strlen(array_v.data()) << '\n';
    // error: the underlying character array is not null-terminated

    std::string str(array_v.data(), array_v.size()); // OK
    std::cout << std::strlen(str.data()) << '\n';
    // OK: the underlying character array of a std::string is always null-terminated
}
