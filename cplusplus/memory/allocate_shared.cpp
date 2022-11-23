// cplusplus link https://cplusplus.com/reference/memory\allocate_shared
// allocate_shared example
#include <iostream>
#include <memory>

int main()
{
    std::allocator<int> alloc; // the default allocator for int
    std::default_delete<int> del; // the default deleter for int

    std::shared_ptr<int> foo = std::allocate_shared<int>(alloc, 10);

    auto bar = std::allocate_shared<int>(alloc, 20);

    auto baz = std::allocate_shared<std::pair<int, int>>(alloc, 30, 40);

    std::cout << "*foo: " << *foo << '\n';
    std::cout << "*bar: " << *bar << '\n';
    std::cout << "*baz: " << baz->first << ' ' << baz->second << '\n';

    return 0;
}
