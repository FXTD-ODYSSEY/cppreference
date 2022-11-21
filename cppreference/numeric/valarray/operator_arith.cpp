// cppreference link https://en.cppreference.com/w/cpp/numeric/valarray/operator_arith
#include <iostream>
#include <string_view>
#include <valarray>

template <typename T>
void print(std::string_view const note,
    std::valarray<T> const vala, // by-value, see Notes above
    std::string_view const term = "\n")
{
    std::cout << note << std::boolalpha << std::showpos;
    for (T const element : vala)
        std::cout << '\t' << element;
    std::cout << term;
}

int main()
{
    std::valarray<int> x { 1, 2, 3, 4 };
    print<int>("x: ", x);
    print<int>("+x: ", +x);
    print<int>("+ + x: ", + +x);
    print<int>("-x: ", -x);
    print<int>("- - x: ", - -x, "\n\n");

    std::valarray<short> y { 0, 1, -1, 0x7fff };
    print<short>("y: ", y);
    print<short>("~y: ", ~y);
    print<short>("~~y: ", ~~y, "\n\n");

    std::valarray<bool> z { true, false };
    print<bool>("z: ", z);
    print<bool>("!z: ", !z);
    print<bool>("!!z: ", !!z);
}
