// cplusplus link https://cplusplus.com/reference/streambuf\streambuf\sbumpc
// show file content - sbumpc() example
#include <cstdio> // EOF
#include <fstream> // std::ifstream
#include <iostream> // std::cout, std::streambuf

int main()
{
    std::ifstream istr("test.txt");
    if (istr) {
        std::streambuf* pbuf = istr.rdbuf();
        while (pbuf->sgetc() != EOF) {
            char ch = pbuf->sbumpc();
            std::cout << ch;
        }
        istr.close();
    }
    return 0;
}
