// cppreference link https://en.cppreference.com/w/cpp/types/is_rvalue_reference
#include <type_traits>

class A { };

int main()
{
    static_assert(not std::is_rvalue_reference_v<A>);
    static_assert(not std::is_rvalue_reference_v<A&>);
    static_assert(std::is_rvalue_reference_v<A&&>);
    static_assert(not std::is_rvalue_reference_v<int>);
    static_assert(not std::is_rvalue_reference_v<int&>);
    static_assert(std::is_rvalue_reference_v<int&&>);
}
