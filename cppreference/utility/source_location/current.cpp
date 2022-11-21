// cppreference link https://en.cppreference.com/w/cpp/utility/source_location/current
#include <iostream>
#include <source_location>

struct src_rec {
    std::source_location srcl = std::source_location::current();
    int dummy = 0;

    src_rec(std::source_location loc = std::source_location::current())
        : srcl(loc) // values of member refer to the location of the calling function
    {
    }
    src_rec(int i)
        : // values of member refer to this location
        dummy(i)
    {
    }
    src_rec(double) // values of member refer to this location
    {
    }
};

std::source_location src_clone(std::source_location a = std::source_location::current())
{
    return a;
}

std::source_location src_make()
{
    std::source_location b = std::source_location::current();
    return b;
}

int main()
{
    src_rec srec0;
    src_rec srec1(0);
    src_rec srec2(0.0);
    auto s0 = std::source_location::current();
    auto s1 = src_clone(s0);
    auto s2 = src_clone();
    auto s3 = src_make();

    std::cout
        << srec0.srcl.line() << ' ' << srec0.srcl.function_name() << '\n'
        << srec1.srcl.line() << ' ' << srec1.srcl.function_name() << '\n'
        << srec2.srcl.line() << ' ' << srec2.srcl.function_name() << '\n'
        << s0.line() << ' ' << s0.function_name() << '\n'
        << s1.line() << ' ' << s1.function_name() << '\n'
        << s2.line() << ' ' << s2.function_name() << '\n'
        << s3.line() << ' ' << s3.function_name() << '\n';
}
