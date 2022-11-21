// cppreference link https://en.cppreference.com/w/cpp/iterator/ostreambuf_iterator
#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>

int main()
{
    std::string s = "This is an example\n";
    std::copy(s.begin(), s.end(), std::ostreambuf_iterator<char>(std::cout));
}
