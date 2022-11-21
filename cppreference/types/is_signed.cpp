// cppreference link https://en.cppreference.com/w/cpp/types/is_signed
#include <iostream>
#include <type_traits>

class A { };
enum B : int {};
enum class C : int {};

int main()
{
    std::cout << std::boolalpha;
    std::cout << std::is_signed<A>::value << '\n'; // false
    std::cout << std::is_signed<float>::value << '\n'; // true
    std::cout << std::is_signed<signed int>::value << '\n'; // true
    std::cout << std::is_signed<unsigned int>::value << '\n'; // false
    std::cout << std::is_signed<B>::value << '\n'; // false
    std::cout << std::is_signed<C>::value << '\n'; // false

    // shorter:
    std::cout << std::is_signed_v<bool> << '\n'; // false
    std::cout << std::is_signed<signed int>() << '\n'; // true
    std::cout << std::is_signed<unsigned int> {} << '\n'; // false
}
