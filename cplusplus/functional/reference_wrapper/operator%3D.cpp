// cplusplus link https://cplusplus.com/reference/functional\reference_wrapper\operator%3D
// reference_wrapper::operator=
#include <functional> // std::reference_wrapper
#include <iostream> // std::cout

int main()
{
    int a, b;

    // reference_wrapper assignment:
    a = 10;
    b = 20;
    std::reference_wrapper<int> wrap1(a);
    std::reference_wrapper<int> wrap2(b);

    wrap1 = wrap2;
    ++wrap1;
    ++wrap2;

    std::cout << "a: " << a << '\n';
    std::cout << "b: " << b << '\n';

    std::cout << '\n';

    // note the difference with:
    a = 10;
    b = 20;
    int& ref1(a);
    int& ref2(b);

    ref1 = ref2;
    ++ref1;
    ++ref2;

    std::cout << "a: " << a << '\n';
    std::cout << "b: " << b << '\n';

    return 0;
}
