// cplusplus link https://cplusplus.com/reference/iterator\istreambuf_iterator
// istreambuf_iterator example
#include <iostream> // std::cin, std::cout
#include <iterator> // std::istreambuf_iterator
#include <string> // std::string

int main()
{
    std::istreambuf_iterator<char> eos; // end-of-range iterator
    std::istreambuf_iterator<char> iit(std::cin.rdbuf()); // stdin iterator
    std::string mystring;

    std::cout << "Please, enter your name: ";

    while (iit != eos && *iit != '\n')
        mystring += *iit++;

    std::cout << "Your name is " << mystring << ".\n";

    return 0;
}
