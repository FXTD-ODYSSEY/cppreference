// cppreference link https://en.cppreference.com/w/cpp/types/reference_constructs_from_temporary
#include <iostream>
#include <type_traits>

int main()
{
    std::cout << std::boolalpha
              << std::reference_constructs_from_temporary_v<int&&, int> << '\n'
              << std::reference_constructs_from_temporary_v<const int&, int> << '\n'
              << std::reference_constructs_from_temporary_v<int&&, int&&> << '\n'
              << std::reference_constructs_from_temporary_v<const int&, int&&> << '\n'
              << std::reference_constructs_from_temporary_v<int&&, long&&> << '\n';
    << std::reference_constructs_from_temporary_v<int&&, long> << '\n';
}
