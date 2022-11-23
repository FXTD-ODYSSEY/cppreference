// cplusplus link https://cplusplus.com/reference/streambuf\streambuf\sputc
// typewriter - sputc() example
#include <fstream> // std::ofstream
#include <iostream> // std::cin, std::cout, std::streambuf

int main()
{
    char ch;
    std::ofstream ostr("test.txt");
    if (ostr) {
        std::cout << "Writing to file. Type a dot (.) to end.\n";
        std::streambuf* pbuf = ostr.rdbuf();
        do {
            ch = std::cin.get();
            pbuf->sputc(ch);
        } while (ch != '.');
        ostr.close();
    }

    return 0;
}
