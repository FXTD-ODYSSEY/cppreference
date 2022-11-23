// cplusplus link https://cplusplus.com/reference/memory\const_pointer_cast
// static_pointer_cast example
#include <iostream>
#include <memory>

int main()
{
    std::shared_ptr<int> foo;
    std::shared_ptr<const int> bar;

    foo = std::make_shared<int>(10);

    bar = std::const_pointer_cast<const int>(foo);

    std::cout << "*bar: " << *bar << '\n';
    *foo = 20;
    std::cout << "*bar: " << *bar << '\n';

    return 0;
}
