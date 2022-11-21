// cppreference link https://en.cppreference.com/w/cpp/string/byte/strtoimax
#include <cinttypes>
#include <iostream>
#include <string>

int main()
{
    std::string str = "helloworld";
    std::intmax_t val = std::strtoimax(str.c_str(), nullptr, 36);
    std::cout << str << " in base 36 is " << val << " in base 10\n";

    char* nptr;
    val = std::strtoimax(str.c_str(), &nptr, 30);
    if (nptr != &str[0] + str.size())
        std::cout << str << " in base 30 is invalid."
                  << " The first invalid digit is '" << *nptr << "'\n";
}
