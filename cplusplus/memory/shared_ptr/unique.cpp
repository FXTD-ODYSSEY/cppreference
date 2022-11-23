// cplusplus link https://cplusplus.com/reference/memory\shared_ptr\unique
// shared_ptr::unique
#include <iostream>
#include <memory>

int main()
{
    std::shared_ptr<int> foo;
    std::shared_ptr<int> bar(new int);

    std::cout << "foo unique?\n"
              << std::boolalpha;

    std::cout << "1: " << foo.unique() << '\n'; // false (empty)

    foo = bar;
    std::cout << "2: " << foo.unique() << '\n'; // false (shared with bar)

    bar = nullptr;
    std::cout << "3: " << foo.unique() << '\n'; // true

    return 0;
}
