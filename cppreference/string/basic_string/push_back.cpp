// cppreference link https://en.cppreference.com/w/cpp/string/basic_string/push_back
#include <cassert>
#include <iomanip>
#include <iostream>
#include <string>

int main()
{
    std::string str { "Short string" };
    std::cout << "before=" << std::quoted(str) << '\n';
    assert(str.size() == 12);

    str.push_back('!');
    std::cout << " after=" << quoted(str) << '\n';
    assert(str.size() == 13);
}
