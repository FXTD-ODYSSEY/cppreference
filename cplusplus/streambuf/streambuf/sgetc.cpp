// cplusplus link https://cplusplus.com/reference/streambuf\streambuf\sgetc
// show file content - sgetc() example
#include <cstdio> // EOF
#include <fstream> // std::ifstream
#include <iostream> // std::cout, std::streambuf

int main()
{
    std::ifstream istr("test.txt");
    if (istr) {
        std::streambuf* pbuf = istr.rdbuf();
        do {
            char ch = pbuf->sgetc();
            std::cout << ch;
        } while (pbuf->snextc() != EOF);
        istr.close();
    }
    return 0;
}
