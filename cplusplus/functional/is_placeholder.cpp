// cplusplus link https://cplusplus.com/reference/functional\is_placeholder
// is_placeholder example
#include <functional> // std::is_placeholder, std::placeholders
#include <iostream> // std::cout, std::boolalpha

int main()
{
    using namespace std::placeholders; // introduces _1

    std::cout << std::is_placeholder<decltype(_1)>::value << '\n';
    std::cout << std::is_placeholder<decltype(_2)>::value << '\n';
    std::cout << std::is_placeholder<int>::value << '\n';

    return 0;
}
