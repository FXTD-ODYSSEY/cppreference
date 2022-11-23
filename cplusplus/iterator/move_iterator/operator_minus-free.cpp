// cplusplus link https://cplusplus.com/reference/iterator\move_iterator\operator_minus-free
// subtracting move_iterators
#include <iostream> // std::cout
#include <iterator> // std::move_iterator
#include <string> // std::string

int main()
{
    std::string foo[] = { "one", "two", "three" };

    std::move_iterator<std::string*> from(foo);
    std::move_iterator<std::string*> until(foo);
    until += sizeof(foo) / sizeof(std::string);

    std::cout << "foo has " << (until - from) << " elements.\n";

    return 0;
}
