// cplusplus link https://cplusplus.com/reference/memory\shared_ptr\operator%3D
// shared_ptr::operator= example
#include <iostream>
#include <memory>

int main()
{
    std::shared_ptr<int> foo;
    std::shared_ptr<int> bar(new int(10));

    foo = bar; // copy

    bar = std::make_shared<int>(20); // move

    std::unique_ptr<int> unique(new int(30));
    foo = std::move(unique); // move from unique_ptr

    std::cout << "*foo: " << *foo << '\n';
    std::cout << "*bar: " << *bar << '\n';

    return 0;
}
