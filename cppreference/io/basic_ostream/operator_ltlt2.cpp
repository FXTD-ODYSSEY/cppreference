// cppreference link https://en.cppreference.com/w/cpp/io/basic_ostream/operator_ltlt2
#include <fstream>
#include <iostream>

void foo()
{
    // error: operator<< (basic_ostream<char, _Traits>&, char8_t) is deleted
    //  std::cout << u8'z' << '\n';
}

std::ostream& operator<<(std::ostream& os, char8_t const& ch)
{
    return os << static_cast<char>(ch);
}

int main()
{
    std::cout << "Hello, world" // uses `const char*` overload
              << '\n'; // uses `char` overload
    std::ofstream { "test.txt" } << 1.2; // uses rvalue overload

    std::cout << u8'!' << '\n'; // uses program-defined operator<<(os, char8_t const&)
}
