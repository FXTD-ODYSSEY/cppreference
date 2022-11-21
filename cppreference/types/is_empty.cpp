// cppreference link https://en.cppreference.com/w/cpp/types/is_empty
#include <iostream>
#include <type_traits>

struct A { };

struct B {
    int m;
};

struct C {
    static int m;
};

struct D {
    virtual ~D();
};

union E {
};

struct F {
    [[no_unique_address]] E e;
};

struct G {
    int : 0;
    // C++ standard allow "as a special case, an unnamed bit-field with a width of zero
    // specifies alignment of the next bit-field at an allocation unit boundary.
    // Only when declaring an unnamed bit-field may the width be zero."
};

int main()
{
    std::cout << std::boolalpha;
    std::cout << "A " << std::is_empty<A>::value << '\n';
    std::cout << "B " << std::is_empty<B>::value << '\n';
    std::cout << "C " << std::is_empty<C>::value << '\n';
    std::cout << "D " << std::is_empty<D>::value << '\n';
    std::cout << "E " << std::is_empty<E>::value << '\n';
    std::cout << "F " << std::is_empty<F>::value << '\n'; // the result is ABI-dependent
    std::cout << "G " << std::is_empty<G>::value << '\n'; // unnamed bit-fields of width of 0
}
