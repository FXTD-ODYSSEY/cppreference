// cplusplus link https://cplusplus.com/reference/functional\ref
// ref example
#include <functional> // std::ref
#include <iostream> // std::cout

int main()
{
    int foo(10);

    auto bar = std::ref(foo);

    ++bar;

    std::cout << foo << '\n';

    return 0;
}
