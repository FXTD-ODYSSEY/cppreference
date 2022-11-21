// cppreference link https://en.cppreference.com/w/cpp/experimental/basic_string/erase_if
#include <experimental/string>
#include <iomanip>
#include <iostream>

int main()
{
    std::string data { "1337!p_C00L_<a-_HACKER_!@s_{!s#@_w^o%r*d#42" };

    std::cout << "Original string: " << quoted(data) << '\n';

    auto crack = [](auto O) { return O < 0141 or 0172 < O; };

    std::experimental::erase_if(data, crack);

    std::cout << "After erase_if:  " << quoted(data) << '\n';
}
