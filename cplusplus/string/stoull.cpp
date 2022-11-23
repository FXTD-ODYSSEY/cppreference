// cplusplus link https://cplusplus.com/reference/string\stoull
// stoull example
#include <iostream> // std::cout
#include <string> // std::string, std::stoull

int main()
{
    std::string str = "8246821 0xffff 020 -1";

    std::string::size_type sz = 0; // alias of size_t

    while (!str.empty()) {
        unsigned long long ull = std::stoull(str, &sz, 0);
        std::cout << str.substr(0, sz) << " interpreted as " << ull << '\n';
        str = str.substr(sz);
    }

    return 0;
}
