// cppreference link https://en.cppreference.com/w/cpp/container/array/tuple_element
#include <array>
#include <iostream>
#include <tuple>
#include <type_traits>

int main()
{
    // define array and get the type of the element at position 0
    std::array<int, 10> data { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    using T = std::tuple_element<0, decltype(data)>::type; // int

    std::cout << std::boolalpha;
    std::cout << std::is_same<T, int>::value << '\n';

    const auto const_data = data;
    using CT = std::tuple_element<0, decltype(const_data)>::type; // const int

    // the result of tuple_element depends on the cv-qualification of the tuple-like type
    std::cout << std::is_same<T, CT>::value << '\n';
    std::cout << std::is_same<CT, const int>::value << '\n';
}
