// cppreference link https://en.cppreference.com/w/cpp/memory/gc/get_pointer_safety
#include <iostream>
#include <memory>

int main()
{
    std::cout << "Pointer safety: ";
    switch (std::get_pointer_safety()) {
    case std::pointer_safety::strict:
        std::cout << "strict\n";
        break;
    case std::pointer_safety::preferred:
        std::cout << "preferred\n";
        break;
    case std::pointer_safety::relaxed:
        std::cout << "relaxed\n";
        break;
    }
}
