// cplusplus link https://cplusplus.com/reference/array\array\data
// array::data
#include <array>
#include <cstring>
#include <iostream>

int main()
{
    const char* cstr = "Test string";
    std::array<char, 12> charray;

    std::memcpy(charray.data(), cstr, 12);

    std::cout << charray.data() << '\n';

    return 0;
}
