// cplusplus link https://cplusplus.com/reference/functional\cref
// cref example
#include <functional> // std::ref
#include <iostream> // std::cout

int main()
{
    int foo(10);

    auto bar = std::cref(foo);

    ++foo;

    std::cout << bar << '\n';

    return 0;
}
