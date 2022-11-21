// cppreference link https://en.cppreference.com/w/cpp/string/basic_string_view/rend
#include <algorithm>
#include <iostream>
#include <iterator>
#include <string_view>

int main()
{
    std::ostream_iterator<char> out_it(std::cout);
    std::string_view str_view("abcdef");

    std::copy(str_view.rbegin(), str_view.rend(), out_it);
    *out_it = '\n';

    std::copy(str_view.crbegin(), str_view.crend(), out_it);
    *out_it = '\n';
}
