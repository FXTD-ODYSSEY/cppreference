// cplusplus link https://cplusplus.com/reference/memory\weak_ptr\owner_before
// weak_ptr::owner_before
#include <iostream>
#include <memory>

int main()
{
    int* p = new int(10);

    std::shared_ptr<int> a(new int(20));
    std::shared_ptr<int> b(a, p); // alias constructor

    std::weak_ptr<int> c(b);

    std::cout << "comparing a and c...\n"
              << std::boolalpha;
    std::cout << "value-based: " << (!(a < c.lock()) && !(c.lock() < a)) << '\n';
    std::cout << "owner-based: " << (!a.owner_before(c) && !c.owner_before(a)) << '\n';

    delete p;
    return 0;
}
