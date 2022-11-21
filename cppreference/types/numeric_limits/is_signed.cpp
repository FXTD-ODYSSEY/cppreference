// cppreference link https://en.cppreference.com/w/cpp/types/numeric_limits/is_signed
#include <iomanip>
#include <iostream>
#include <limits>

template <typename T>
struct test {
    test(const char* name, int w = 15)
    {
        std::cout
            << std::left << std::setw(w)
            << (std::numeric_limits<T>::is_specialized ? name : "non-specialized")
            << ": "
            << (std::numeric_limits<T>::is_signed ? "" : "un") << "signed\n";
    }
};

int main()
{
    test<bool> { "bool" };
    test<char> { "char" };
    test<wchar_t> { "wchar_t" };
    test<char16_t> { "char16_t" };
    test<char32_t> { "char32_t" };
    test<float> { "float" };
    struct delusion { };
    test<delusion> { "delusion" };
    test<decltype(42)> { "decltype(42)" };
}
