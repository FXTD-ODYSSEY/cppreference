// cppreference link https://en.cppreference.com/w/cpp/string/basic_string/max_size
#include <climits>
#include <iostream>
#include <string>

int main()
{
    std::string s;
    std::cout
        << "Maximum size of a string is " << s.max_size() << " ("
        << std::hex << std::showbase << s.max_size()
        << "), pointer size: " << std::dec
        << CHAR_BIT * sizeof(void*) << " bits\n";
}
