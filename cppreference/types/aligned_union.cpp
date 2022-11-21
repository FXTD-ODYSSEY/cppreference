// cppreference link https://en.cppreference.com/w/cpp/types/aligned_union
#include <iostream>
#include <string>
#include <type_traits>

int main()
{
    std::cout
        << sizeof(std::aligned_union_t<0, char>) << ' ' // 1
        << sizeof(std::aligned_union_t<2, char>) << ' ' // 2
        << sizeof(std::aligned_union_t<2, char[3]>) << ' ' // 3 (!)
        << sizeof(std::aligned_union_t<3, char[4]>) << ' ' // 4
        << sizeof(std::aligned_union_t<1, char, int, double>) << ' ' // 8
        << sizeof(std::aligned_union_t<12, char, int, double>) << '\n'; // 16 (!)

    using var_t = std::aligned_union<16, int, std::string>;

    std::cout
        << "var_t::alignment_value = " << var_t::alignment_value << '\n'
        << "sizeof(var_t::type) = " << sizeof(var_t::type) << '\n';

    var_t::type aligned_storage;
    int* int_ptr = new (&aligned_storage) int(42); // placement new
    std::cout << "*int_ptr = " << *int_ptr << '\n';

    std::string* string_ptr = new (&aligned_storage) std::string("bar");
    std::cout << "*string_ptr = " << *string_ptr << '\n';
    *string_ptr = "baz";
    std::cout << "*string_ptr = " << *string_ptr << '\n';
    string_ptr->~basic_string();
}
