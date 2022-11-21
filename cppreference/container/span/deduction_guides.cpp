// cppreference link https://en.cppreference.com/w/cpp/container/span/deduction_guides
#include <array>
#include <cstddef>
#include <iomanip>
#include <iostream>
#include <span>
#include <string_view>
#include <vector>

void print(std::string_view rem = "", std::size_t size_of = 0, std::size_t extent = 0)
{
    if (rem.empty()) {
        std::cout << "name │ sizeof │ extent\n─────┼────────┼────────\n";
        return;
    }
    std::cout << std::setw(4) << rem << " │ " << std::setw(6) << size_of << " │ ";
    if (extent == std::dynamic_extent)
        std::cout << "dynamic";
    else
        std::cout << extent;
    std::cout << '\n';
}

int main()
{
    int a[] { 1, 2, 3, 4, 5 };

    print();
    std::span s1 { std::begin(a), std::end(a) }; // guide (1)
    print("s1", sizeof s1, s1.extent);

    std::span s2 { std::begin(a), 3 }; // guide (1)
    print("s2", sizeof s2, s2.extent);

    std::span s3 { a }; // guide (2)
    print("s3", sizeof s3, s3.extent);

    std::span<int> s4 { a }; // does not use a guide, makes a dynamic span
    print("s4", sizeof s4, s4.extent);

    std::array arr { 6, 7, 8 };
    std::span s5 { arr }; // guide (3)
    print("s5", sizeof s5, s5.extent);
    s5[0] = 42; // OK, element_type is 'int'

    const std::array arr2 { 9, 10, 11 };
    std::span s6 { arr2 }; // guide (4)
    print("s6", sizeof s6, s6.extent);
    // s6[0] = 42; // Error: element_type is 'const int'

    std::vector v { 66, 69, 99 };
    std::span s7 { v }; // guide (5)
    print("s7", sizeof s7, s7.extent);
}
