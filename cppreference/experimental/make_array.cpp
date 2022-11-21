// cppreference link https://en.cppreference.com/w/cpp/experimental/make_array
#include <experimental/array>
#include <iostream>
#include <type_traits>

int main()
{
    auto arr = std::experimental::make_array(1, 2, 3, 4, 5);
    bool is_array_of_5_ints = std::is_same<decltype(arr), std::array<int, 5>>::value;
    std::cout << "Returns an array of five ints? ";
    std::cout << std::boolalpha << is_array_of_5_ints << '\n';
}
