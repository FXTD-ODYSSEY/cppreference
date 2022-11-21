// cppreference link https://en.cppreference.com/w/cpp/string/basic_string/pop_back
#include <cassert>
#include <iomanip>
#include <iostream>
#include <string>

int main()
{
    std::string str("Short string!");
    std::cout << "before=" << quoted(str) << '\n';
    assert(str.size() == 13);

    str.pop_back();
    std::cout << " after=" << quoted(str) << '\n';
    assert(str.size() == 12);

    str.clear();
    //  str.pop_back(); // UB!
}
