// cplusplus link https://cplusplus.com/reference/fstream\basic_ofstream\rdbuf
// copy a file using file stream buffers
#include <cstdio> // EOF
#include <fstream> // std::filebuf, std::ifstream, std::ofstream

int main()
{
    std::ifstream ifs("test.txt");
    std::ofstream ofs("copy.txt");

    std::filebuf* inbuf = ifs.rdbuf();
    std::filebuf* outbuf = ofs.rdbuf();

    char c = inbuf->sbumpc();
    while (c != EOF) {
        outbuf->sputc(c);
        c = inbuf->sbumpc();
    }

    ofs.close();
    ifs.close();

    return 0;
}
