// cplusplus link https://cplusplus.com/reference/typeinfo\type_info\before
// ordering types
#include <iostream> // std::cout
#include <typeinfo> // operator typeid

int main()
{
    if (typeid(int).before(typeid(char)))
        std::cout << "int goes before char in this implementation.\n";
    else
        std::cout << "char goes before int in this implementation.\n";

    return 0;
}
