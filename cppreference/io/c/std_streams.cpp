// cppreference link https://en.cppreference.com/w/cpp/io/c/std_streams
#include <concepts>
#include <cstdio>
#include <type_traits>

template <typename T>
concept IsPrintable = std::integral<T> or std::floating_point<T> or std::is_pointer_v<T>;

int my_printf(char const* const format, IsPrintable auto const... arguments)
{
    return std::fprintf(stdout, format, arguments...);
}

int main(int argv, char*[])
{
    my_printf("Strings and chars:\t%s%c\n", "hello", 'x');
    my_printf("Rounding:\t\t%f%.0f%.32f\n", 1.5, 1.5, 1.3);
    my_printf("Padding:\t\t%05.2f%.2f%5.2f\n", 1.5, 1.5, 1.5);
    my_printf("Scientific:\t\t%E%e\n", 1.5, 1.5);
    my_printf("Hexadecimal:\t\t%a%A 0x%X\n", 1.5, 1.5, &argv);
}
