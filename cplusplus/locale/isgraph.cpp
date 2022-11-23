// cplusplus link https://cplusplus.com/reference/locale\isgraph
// isgraph example (C++)
#include <fstream> // std::ifstream
#include <iostream> // std::cout
#include <locale> // std::locale, std::isgraph

int main()
{
    std::locale loc;
    std::ifstream myfile("myfile.txt");
    char c;
    while (myfile.good()) {
        myfile >> c;
        if (std::isgraph(c, loc))
            std::cout << c;
    }
    myfile.close();
    return 0;
}
