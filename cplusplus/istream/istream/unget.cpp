// cplusplus link https://cplusplus.com/reference/istream\istream\unget
// istream::unget example
#include <iostream> // std::cin, std::cout
#include <string> // std::string

int main()
{
    std::cout << "Please, enter a number or a word: ";
    char c = std::cin.get();

    if ((c >= '0') && (c <= '9')) {
        int n;
        std::cin.unget();
        std::cin >> n;
        std::cout << "You entered a number: " << n << '\n';
    } else {
        std::string str;
        std::cin.unget();
        getline(std::cin, str);
        std::cout << "You entered a word: " << str << '\n';
    }
    return 0;
}
