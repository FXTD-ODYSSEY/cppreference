// cppreference link https://en.cppreference.com/w/cpp/types/negation
#include <iostream>
#include <type_traits>

static_assert(
    std::is_same<
        std::bool_constant<false>,
        typename std::negation<std::bool_constant<true>>::type>::value,
    "");
static_assert(
    std::is_same<
        std::bool_constant<true>,
        typename std::negation<std::bool_constant<false>>::type>::value,
    "");

int main()
{
    std::cout << std::boolalpha;
    std::cout << std::negation<std::bool_constant<true>>::value << '\n';
    std::cout << std::negation<std::bool_constant<false>>::value << '\n';
}
