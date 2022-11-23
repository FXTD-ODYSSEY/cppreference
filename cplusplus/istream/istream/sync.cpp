// cplusplus link https://cplusplus.com/reference/istream\istream\sync
// syncing input stream
#include <iostream> // std::cin, std::cout

int main()
{
    char first, second;

    std::cout << "Please, enter a word: ";
    first = std::cin.get();
    std::cin.sync();

    std::cout << "Please, enter another word: ";
    second = std::cin.get();

    std::cout << "The first word began by " << first << '\n';
    std::cout << "The second word began by " << second << '\n';

    return 0;
}
