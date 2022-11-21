// cppreference link https://en.cppreference.com/w/cpp/container/array/deduction_guides
#include <array>
#include <cassert>

int main()
{
    int const x = 10;
    std::array a { 1, 2, 3, 5, x }; // OK, creates std::array<int, 5>
    assert(a.back() == x);

    //  std::array b{1, 2u}; // Error, all arguments must have same type

    //  std::array<short> c{3, 2, 1}; // Error, wrong number of template args
    std::array c(std::to_array<short>({ 3, 2, 1 })); // C++20 alternative, creates std::array<short, 3>
}
