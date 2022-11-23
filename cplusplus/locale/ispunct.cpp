// cplusplus link https://cplusplus.com/reference/locale\ispunct
// ispunct example (C++)
#include <iostream> // std::cout
#include <locale> // std::locale, std::ispunct
#include <string> // std::string

int main()
{
    std::locale loc;
    std::string str = "Hello, welcome!";
    int cx = 0;
    for (std::string::iterator it = str.begin(); it != str.end(); ++it)
        if (std::ispunct(*it, loc))
            ++cx;
    std::cout << "The sentence contains " << cx << " punctuation characters.\n";
    return 0;
}
