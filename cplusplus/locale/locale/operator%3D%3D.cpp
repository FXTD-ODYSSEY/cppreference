// cplusplus link https://cplusplus.com/reference/locale\locale\operator%3D%3D
// locale::operator== example
#include <iostream> // std::cout
#include <locale> // std::locale

int main()
{
    if (std::cout.getloc() == std::locale("C"))
        std::cout << "cout is using the C locale.\n";
    else
        std::cout << "cout is not using the C locale.\n";

    return 0;
}
