// cplusplus link https://cplusplus.com/reference/memory\get_pointer_safety
// get_pointer_safety example
#include <iostream>
#include <memory>

int main()
{
    std::cout << "Pointer safety: ";
    switch (std::get_pointer_safety()) {
    case std::pointer_safety::relaxed:
        std::cout << "relaxed";
        break;
    case std::pointer_safety::preferred:
        std::cout << "preferred";
        break;
    case std::pointer_safety::strict:
        std::cout << "strict";
        break;
    }
    std::cout << '\n';
    return 0;
}
