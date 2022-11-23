// cplusplus link https://cplusplus.com/reference/streambuf\streambuf\sputn
// sputn() example
#include <fstream> // std::ofstream
#include <iostream> // std::streambuf

int main()
{
    const char sentence[] = "Sample sentence";

    std::ofstream ostr("test.txt");
    if (ostr) {
        std::streambuf* pbuf = ostr.rdbuf();
        pbuf->sputn(sentence, sizeof(sentence) - 1);
        ostr.close();
    }

    return 0;
}
