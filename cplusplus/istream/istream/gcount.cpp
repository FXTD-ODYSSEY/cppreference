// cplusplus link https://cplusplus.com/reference/istream\istream\gcount
// cin.gcount example
#include <iostream> // std::cin, std::cout

int main()
{
    char str[20];

    std::cout << "Please, enter a word: ";
    std::cin.getline(str, 20);
    std::cout << std::cin.gcount() << " characters read: " << str << '\n';

    return 0;
}
