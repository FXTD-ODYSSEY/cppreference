// cplusplus link https://cplusplus.com/reference/ostream\ostream\operator-free
// example on insertion
#include <iostream> // std::cout

int main()
{

    const char str[] = "Example string";
    char ch = 'X';

    std::cout << str << '\n'; // Insert string

    std::cout.width(5);
    std::cout.fill('*');

    std::cout << ch << '\n'; // Insert single character

    return 0;
}
