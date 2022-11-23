// cplusplus link https://cplusplus.com/reference/streambuf\streambuf\sgetn
// read a file into buffer - sgetn() example
#include <fstream> // std::ifstream
#include <iostream> // std::cout, std::streambuf, std::streamsize

int main()
{
    char* contents;
    std::ifstream istr("test.txt");

    if (istr) {
        std::streambuf* pbuf = istr.rdbuf();
        std::streamsize size = pbuf->pubseekoff(0, istr.end);
        pbuf->pubseekoff(0, istr.beg); // rewind
        contents = new char[size];
        pbuf->sgetn(contents, size);
        istr.close();
        std::cout.write(contents, size);
    }
    return 0;
}
