// cppreference link https://en.cppreference.com/w/cpp/types/is_constructible
#include <iostream>
#include <type_traits>

class Foo {
    int v1;
    double v2;

public:
    Foo(int n)
        : v1(n)
        , v2()
    {
    }
    Foo(int n, double f) noexcept
        : v1(n)
        , v2(f)
    {
    }
};

int main()
{
    auto is = [](bool o) { return (o ? "\t"
                                       "is "
                                     : "\t"
                                       "isn't "); };
    std::cout << "Foo ...\n"
              << is(std::is_trivially_constructible_v<Foo, const Foo&>)
              << "Trivially-constructible from const Foo&\n"
              << is(std::is_trivially_constructible_v<Foo, int>)
              << "Trivially-constructible from int\n"
              << is(std::is_constructible_v<Foo, int>)
              << "Constructible from int\n"
              << is(std::is_nothrow_constructible_v<Foo, int>)
              << "Nothrow-constructible from int\n"
              << is(std::is_nothrow_constructible_v<Foo, int, double>)
              << "Nothrow-constructible from int and double\n";
}
