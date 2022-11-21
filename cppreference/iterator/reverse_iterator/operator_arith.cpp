// cppreference link https://en.cppreference.com/w/cpp/iterator/reverse_iterator/operator_arith
#include <iostream>
#include <iterator>
#include <list>
#include <vector>

int main()
{
    std::vector v { 0, 1, 2, 3, 4 };
    auto rv = std::reverse_iterator { v.rbegin() };
    std::cout << *(++rv) << ' '; // 3
    std::cout << *(--rv) << ' '; // 4
    std::cout << *(rv + 3) << ' '; // 1
    rv += 3;
    std::cout << rv[0] << ' '; // 1
    rv -= 3;
    std::cout << rv[0] << '\n'; // 4

    std::list l { 5, 6, 7, 8 };
    auto rl = std::reverse_iterator { l.rbegin() };
    std::cout << *(++rl) << ' '; // OK: 3
    std::cout << *(--rl) << ' '; // OK: 4
    // The following statements raise compilation error because the
    // underlying iterator does not model the random access iterator:
    //  *(rl + 3) = 13;
    //  rl += 3;
    //  rl -= 3;
}
