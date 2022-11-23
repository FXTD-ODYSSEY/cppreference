// cplusplus link https://cplusplus.com/reference/istream\istream\peek
// istream::peek example
#include <cctype> // std::isdigit
#include <iostream> // std::cin, std::cout
#include <string> // std::string

int main()
{

    std::cout << "Please, enter a number or a word: ";
    std::cout.flush(); // ensure output is written

    std::cin >> std::ws; // eat up any leading white spaces
    int c = std::cin.peek(); // peek character

    if (c == EOF)
        return 1;
    if (std::isdigit(c)) {
        int n;
        std::cin >> n;
        std::cout << "You entered the number: " << n << '\n';
    } else {
        std::string str;
        std::cin >> str;
        std::cout << "You entered the word: " << str << '\n';
    }

    return 0;
}
