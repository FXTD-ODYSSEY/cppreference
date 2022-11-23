// cplusplus link https://cplusplus.com/reference/memory\weak_ptr\lock
// weak_ptr::lock example
#include <iostream>
#include <memory>

int main()
{
    std::shared_ptr<int> sp1, sp2;
    std::weak_ptr<int> wp;
    // sharing group:
    // --------------
    sp1 = std::make_shared<int>(20); // sp1
    wp = sp1; // sp1, wp

    sp2 = wp.lock(); // sp1, wp, sp2
    sp1.reset(); //      wp, sp2

    sp1 = wp.lock(); // sp1, wp, sp2

    std::cout << "*sp1: " << *sp1 << '\n';
    std::cout << "*sp2: " << *sp2 << '\n';

    return 0;
}
