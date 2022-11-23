// cplusplus link https://cplusplus.com/reference/memory\shared_ptr\operator%2A
// shared_ptr::operator*
#include <iostream>
#include <memory>

int main()
{
    std::shared_ptr<int> foo(new int);
    std::shared_ptr<int> bar(new int(100));

    *foo = *bar * 2;

    std::cout << "foo: " << *foo << '\n';
    std::cout << "bar: " << *bar << '\n';

    return 0;
}
