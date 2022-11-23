// cplusplus link https://cplusplus.com/reference/memory\weak_ptr\reset
// weak_ptr::reset example
#include <iostream>
#include <memory>

int main()
{
    std::shared_ptr<int> sp(new int(10));

    std::weak_ptr<int> wp(sp);

    std::cout << "1. wp " << (wp.expired() ? "is" : "is not") << " expired\n";

    wp.reset();

    std::cout << "2. wp " << (wp.expired() ? "is" : "is not") << " expired\n";

    return 0;
}
