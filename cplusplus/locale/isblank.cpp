// cplusplus link https://cplusplus.com/reference/locale\isblank
// isblank example (C++11)
#include <iostream> // std::cout
#include <locale> // std::locale, std::isblank
#include <string> // std::string

int main()
{
    std::locale loc;
    std::string str = "Example sentence to test isblank\n";
    for (char c : str) {
        if (std::isblank(c, loc))
            c = '\n';
        std::cout << c;
    }
    return 0;
}
