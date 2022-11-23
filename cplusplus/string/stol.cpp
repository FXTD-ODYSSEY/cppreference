// cplusplus link https://cplusplus.com/reference/string\stol
// stol example
#include <iostream> // std::cout
#include <string> // std::string, std::stol

int main()
{
    std::string str_dec = "1987520";
    std::string str_hex = "2f04e009";
    std::string str_bin = "-11101001100100111010";
    std::string str_auto = "0x7fffff";

    std::string::size_type sz; // alias of size_t

    long li_dec = std::stol(str_dec, &sz);
    long li_hex = std::stol(str_hex, nullptr, 16);
    long li_bin = std::stol(str_bin, nullptr, 2);
    long li_auto = std::stol(str_auto, nullptr, 0);

    std::cout << str_dec << ": " << li_dec << '\n';
    std::cout << str_hex << ": " << li_hex << '\n';
    std::cout << str_bin << ": " << li_bin << '\n';
    std::cout << str_auto << ": " << li_auto << '\n';

    return 0;
}
