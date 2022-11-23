// cplusplus link https://cplusplus.com/reference/memory\undeclare_no_pointers
// declare_no_pointers / undeclare_no_pointers
#include <iostream>
#include <memory>

int main()
{
    int* foo = new int(1);
    int* bar = new int(2);
    std::declare_no_pointers(reinterpret_cast<char*>(&bar), sizeof(int*));

    std::cout << "*foo: " << *foo << '\n';

    if (std::get_pointer_safety() != std::pointer_safety::strict)
        std::cout << "*bar: " << *bar << '\n'; // invalid if strict safety

    std::undeclare_no_pointers(reinterpret_cast<char*>(&bar), sizeof(int*));

    delete bar;
    delete foo;
    return 0;
}
