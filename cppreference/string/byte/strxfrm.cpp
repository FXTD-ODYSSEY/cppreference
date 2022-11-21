// cppreference link https://en.cppreference.com/w/cpp/string/byte/strxfrm
#include <cassert>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <string>

int main()
{
    char* loc = std::setlocale(LC_COLLATE, "cs_CZ.iso88592");
    assert(loc);

    std::string in1 = "hrnec";
    std::string out1(1 + std::strxfrm(nullptr, in1.c_str(), 0), ' ');
    std::string in2 = "chrt";
    std::string out2(1 + std::strxfrm(nullptr, in2.c_str(), 0), ' ');

    std::strxfrm(&out1[0], in1.c_str(), out1.size());
    std::strxfrm(&out2[0], in2.c_str(), out2.size());

    std::cout << "In the Czech locale: ";
    if (out1 < out2)
        std::cout << in1 << " before " << in2 << '\n';
    else
        std::cout << in2 << " before " << in1 << '\n';

    std::cout << "In lexicographical comparison: ";
    if (in1 < in2)
        std::cout << in1 << " before " << in2 << '\n';
    else
        std::cout << in2 << " before " << in1 << '\n';
}
