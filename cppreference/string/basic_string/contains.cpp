// cppreference link https://en.cppreference.com/w/cpp/string/basic_string/contains
#include <iomanip>
#include <iostream>
#include <string>
#include <string_view>
#include <type_traits>

template <typename SubstrType>
void test_substring(const std::string& str, SubstrType subs)
{
    constexpr char delim = std::is_scalar_v<SubstrType> ? '\'' : '\"';
    std::cout << std::quoted(str)
              << (str.contains(subs) ? " contains "
                                     : " does not contain ")
              << std::quoted(std::string { subs }, delim) << '\n';
}

int main()
{
    using namespace std::literals;

    auto helloWorld = "hello world"s;

    test_substring(helloWorld, "hello"sv);
    test_substring(helloWorld, "goodbye"sv);
    test_substring(helloWorld, 'w');
    test_substring(helloWorld, 'x');
}
