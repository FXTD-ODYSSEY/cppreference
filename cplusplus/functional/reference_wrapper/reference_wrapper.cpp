// cplusplus link https://cplusplus.com/reference/functional\reference_wrapper\reference_wrapper
// reference_wrapper example:
#include <functional> // std::reference_wrapper
#include <iostream> // std::cout

int main()
{
    int a(10), b(20), c(30);

    // an array of "references":
    std::reference_wrapper<int> refs[] = { a, b, c };

    std::cout << "refs:";
    for (int& x : refs)
        std::cout << ' ' << x;
    std::cout << '\n';

    return 0;
}
