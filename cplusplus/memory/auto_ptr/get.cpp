// cplusplus link https://cplusplus.com/reference/memory\auto_ptr\get
// auto_ptr::get example
#include <iostream>
#include <memory>

int main()
{
    std::auto_ptr<int> p(new int);

    *p.get() = 100;

    std::cout << "p points to " << *p.get() << '\n';

    return 0;
}
