// cplusplus link https://cplusplus.com/reference/memory\shared_ptr\operators
// shared_ptr relational operators
#include <iostream>
#include <memory>

int main()
{
    std::shared_ptr<int> a, b, c, d;

    a = std::make_shared<int>(10);
    b = std::make_shared<int>(10);
    c = b;

    std::cout << "comparisons:\n"
              << std::boolalpha;

    std::cout << "a == b: " << (a == b) << '\n';
    std::cout << "b == c: " << (b == c) << '\n';
    std::cout << "c == d: " << (c == d) << '\n';

    std::cout << "a != nullptr: " << (a != nullptr) << '\n';
    std::cout << "b != nullptr: " << (b != nullptr) << '\n';
    std::cout << "c != nullptr: " << (c != nullptr) << '\n';
    std::cout << "d != nullptr: " << (d != nullptr) << '\n';

    return 0;
}
