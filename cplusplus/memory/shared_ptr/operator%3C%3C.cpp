// cplusplus link https://cplusplus.com/reference/memory\shared_ptr\operator%3C%3C
// shared_ptr i/o
#include <iostream>
#include <memory>

int main()
{
    std::shared_ptr<int> foo(new int(10));

    std::cout << " foo: " << foo << '\n';
    std::cout << "*foo: " << *foo << '\n';

    return 0;
}
