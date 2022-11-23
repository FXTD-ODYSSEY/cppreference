// cplusplus link https://cplusplus.com/reference/iterator\ostreambuf_iterator
// ostreambuf_iterator example
#include <algorithm> // std::copy
#include <iostream> // std::cin, std::cout
#include <iterator> // std::ostreambuf_iterator
#include <string> // std::string

int main()
{
    std::string mystring("Some text here...\n");
    std::ostreambuf_iterator<char> out_it(std::cout); // stdout iterator

    std::copy(mystring.begin(), mystring.end(), out_it);

    return 0;
}
