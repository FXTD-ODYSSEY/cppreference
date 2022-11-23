// cplusplus link https://cplusplus.com/reference/fstream\basic_fstream\rdbuf
// copy a file using file stream buffers
#include <cstdio> // EOF
#include <fstream> // std::filebuf, std::fstream

int main()
{
    std::fstream src, dest;
    src.open("test.txt");
    dest.open("copy.txt");

    std::filebuf* inbuf = src.rdbuf();
    std::filebuf* outbuf = dest.rdbuf();

    char c = inbuf->sbumpc();
    while (c != EOF) {
        outbuf->sputc(c);
        c = inbuf->sbumpc();
    }

    dest.close();
    src.close();

    return 0;
}
