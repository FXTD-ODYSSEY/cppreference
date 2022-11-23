// cplusplus link https://cplusplus.com/reference/streambuf\basic_streambuf\sbump
// show file content - sbumpc() example
#include <fstream> // std::ifstream
#include <iostream> // std::cout, std::streambuf

int main()
{
    std::ifstream istr("test.txt");
    if (istr) {
        std::streambuf* pbuf = istr.rdbuf();
        while (pbuf->sgetc() != std::streambuf::traits_type::eof()) {
            char ch = pbuf->sbumpc();
            std::cout << ch;
        }
        istr.close();
    }
    return 0;
}
