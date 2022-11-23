// cplusplus link https://cplusplus.com/reference/streambuf\streambuf\in_avail
// get file buffer size using in_avail
#include <fstream> // std::ifstream
#include <iostream> // std::cout, std::streambuf, std::streamsize

int main()
{
    std::ifstream ifs("test.txt");
    if (ifs.good()) {
        std::streambuf* pbuf = ifs.rdbuf();
        char c;
        ifs >> c;
        std::streamsize size = pbuf->in_avail();
        std::cout << "first character in file: " << c << '\n';
        std::cout << size << " characters in buffer after it\n";
    }
    ifs.close();

    return 0;
}
