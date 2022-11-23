// cplusplus link https://cplusplus.com/reference/locale\locale\global
// locale::global example
#include <iostream> // std::cout
#include <locale> // std::locale

int main(void)
{
    std::locale foo; // the "C" locale
    foo.global(std::locale(""));
    std::locale bar; // the "" locale

    std::cout << "foo and bar are ";
    std::cout << (foo == bar ? "the same" : "different");
    std::cout << ".\n";

    return 0;
}
