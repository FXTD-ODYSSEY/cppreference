// cplusplus link https://cplusplus.com/reference/type_traits\aligned_union
// aligned_union example
#include <iostream>
#include <type_traits>

union U {
    int i;
    char c;
    double d;
    U(const char* str)
        : c(str[0])
    {
    }
}; // non-POD

typedef std::aligned_union<sizeof(U), int, char, double>::type U_pod;

int main()
{
    U_pod a, b; // default-initialized (ok: type is POD)
    new (&a) U("hello"); // call U's constructor in place
    b = a; // assignment (ok: type is POD)
    std::cout << reinterpret_cast<U&>(b).i << std::endl;

    return 0;
}
