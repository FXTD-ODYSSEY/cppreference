// cppreference link https://en.cppreference.com/w/cpp/string/basic_string/operator%3D
#include <iomanip>
#include <iostream>
#include <string>

int main()
{
    std::string str1;
    std::string str2 { "alpha" };

    // (1) operator=( const basic_string& );
    str1 = str2;
    std::cout << std::quoted(str1) << ' ' // "alpha"
              << std::quoted(str2) << '\n'; // "alpha"

    // (2) operator=( basic_string&& );
    str1 = std::move(str2);
    std::cout << std::quoted(str1) << ' ' // "alpha"
              << std::quoted(str2) << '\n'; // "" or "alpha" (unspecified)

    // (3) operator=( const CharT* );
    str1 = "beta";
    std::cout << std::quoted(str1) << '\n'; // "beta"

    // (4) operator=( CharT );
    str1 = '!';
    std::cout << std::quoted(str1) << '\n'; // "!"

    // (5) operator=( std::initializer_list<CharT> );
    str1 = { 'g', 'a', 'm', 'm', 'a' };
    std::cout << std::quoted(str1) << '\n'; // "gamma"

    // (6) operator=( const T& );
    str1 = 35U; // equivalent to str1 = static_cast<char>(35U);
    std::cout << std::quoted(str1) << '\n'; // "#" (ASCII = 35)
}
