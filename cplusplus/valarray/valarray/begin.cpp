// cplusplus link https://cplusplus.com/reference/valarray\valarray\begin
// begin/end valarray
#include <iostream> // std::cout
#include <valarray> // std::valarray

int main()
{
    std::valarray<int> foo { 10, 20, 30, 40, 50 };

    std::cout << "foo contains:";
    for (auto it = begin(foo); it != end(foo); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

    return 0;
}
