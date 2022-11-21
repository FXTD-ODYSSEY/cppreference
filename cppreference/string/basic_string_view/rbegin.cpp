// cppreference link https://en.cppreference.com/w/cpp/string/basic_string_view/rbegin
#include <algorithm>
#include <iostream>
#include <iterator>
#include <string_view>

int main()
{
    std::ostream_iterator<char> out_it(std::cout);
    std::string_view str_view("abcdef");

    std::copy(str_view.rbegin(), std::next(str_view.rbegin(), 3), out_it);
    *out_it = '\n';

    std::copy(str_view.crbegin(), std::next(str_view.crbegin(), 3), out_it);
    *out_it = '\n';
}
