// cplusplus link https://cplusplus.com/reference/ios\ios_base\imbue
// imbue example
#include <iostream> // std::cout
#include <locale> // std::locale

int main()
{
    std::locale mylocale(""); // get global locale
    std::cout.imbue(mylocale); // imbue global locale
    std::cout << 3.14159 << '\n';
    return 0;
}
