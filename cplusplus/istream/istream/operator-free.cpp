// cplusplus link https://cplusplus.com/reference/istream\istream\operator-free
// example on extraction
#include <iostream> // std::cin, std::cout

int main()
{
    char str[10];

    std::cout << "Enter a word: ";
    std::cin.width(10); // limit width
    std::cin >> str;
    std::cout << "The first 9 chars of your word are: " << str << '\n';

    return 0;
}
