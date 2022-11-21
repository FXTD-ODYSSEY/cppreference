// cppreference link https://en.cppreference.com/w/cpp/types/NULL
#include <cstddef>
#include <iostream>
#include <type_traits>
#include <typeinfo>
class S;
int main()
{
    int* p = NULL;
    int* p2 = static_cast<std::nullptr_t>(NULL);
    void (*f)(int) = NULL;
    int S::*mp = NULL;
    void (S::*mfp)(int) = NULL;
    auto nullvar = NULL; // a warning may be triggered when compiling with gcc/clang

    std::cout << "The type of `nullvar` is " << typeid(nullvar).name() << '\n';

    if constexpr (std::is_same_v<decltype(NULL), std::nullptr_t>) {
        std::cout << "NULL implemented with type std::nullptr_t\n";
    } else {
        std::cout << "NULL implemented using an integral type\n";
    }

    [](...) {}(p, p2, f, mp, mfp); //< suppresses "unused variable" warnings
}
