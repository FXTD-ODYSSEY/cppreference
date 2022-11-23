// cplusplus link https://cplusplus.com/reference/streambuf\basic_streambuf\pubseekoff
// get file size using pubseekoff
#include <fstream> // std::fstream
#include <iostream> // std::cout, std::streambuf

int main()
{
    std::fstream filestr("test.txt");
    if (filestr) {
        std::streambuf* pbuf = filestr.rdbuf();
        long size = pbuf->pubseekoff(0, filestr.end);
        std::cout << "The file size is " << size << " characters.\n";
        filestr.close();
    }

    return 0;
}
