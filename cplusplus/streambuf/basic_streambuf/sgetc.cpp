// cplusplus link https://cplusplus.com/reference/streambuf\basic_streambuf\sgetc
// show file content - sgetc() example
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
        } while (pbuf->snextc() != std::streambuf::traits_type::eof());
        istr.close();
    }
    return 0;
}
