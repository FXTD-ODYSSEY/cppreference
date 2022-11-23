// cplusplus link https://cplusplus.com/reference/functional\reference_wrapper\get
// reference_wrapper::get
#include <functional> // std::reference_wrapper
#include <iostream> // std::cout

int main()
{
    int i;

    std::reference_wrapper<int> foo(i);

    foo.get() = 10;

    std::cout << foo.get() << '\n';

    return 0;
}
