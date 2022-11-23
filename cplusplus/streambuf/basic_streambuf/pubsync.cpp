// cplusplus link https://cplusplus.com/reference/streambuf\basic_streambuf\pubsync
// pubsync member
#include <fstream> // std::ofstream
#include <iostream> // std::cout, std::streambuf

int main()
{
    std::ofstream ostr("test.txt");
    if (ostr) {
        std::streambuf* pbuf = ostr.rdbuf();

        pbuf->sputn("First sentence\n", 15);
        pbuf->pubsync();
        pbuf->sputn("Second sentence\n", 16);

        ostr.close();
    }
    return 0;
}
