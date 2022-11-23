// cplusplus link https://cplusplus.com/reference/functional\reference_wrapper\operator_typeref
// reference_wrapper::operator type&
#include <functional> // std::reference_wrapper
#include <iostream> // std::cout

int main()
{
    int foo;

    std::reference_wrapper<int> wrap(foo);

    static_cast<int&>(wrap) = 10;
    int& bar = wrap;
    ++bar;

    std::cout << foo << '\n';

    return 0;
}
