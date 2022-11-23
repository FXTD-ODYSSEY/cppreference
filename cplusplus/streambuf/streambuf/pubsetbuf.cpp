// cplusplus link https://cplusplus.com/reference/streambuf\streambuf\pubsetbuf
// set character buffer (pubsetbuf)
#include <fstream> // std::fstream

int main()
{
    char mybuffer[512];
    std::fstream filestr;
    filestr.rdbuf()->pubsetbuf(mybuffer, 512);

    // operations with file stream here.

    return 0;
}
