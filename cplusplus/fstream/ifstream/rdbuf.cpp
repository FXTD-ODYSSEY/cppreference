// cplusplus link https://cplusplus.com/reference/fstream\ifstream\rdbuf
// read file data using associated buffer's members
#include <fstream> // std::filebuf, std::ifstream
#include <iostream> // std::cout

int main()
{
    std::ifstream ifs("test.txt", std::ifstream::binary);

    // get pointer to associated buffer object
    std::filebuf* pbuf = ifs.rdbuf();

    // get file size using buffer's members
    std::size_t size = pbuf->pubseekoff(0, ifs.end, ifs.in);
    pbuf->pubseekpos(0, ifs.in);

    // allocate memory to contain file data
    char* buffer = new char[size];

    // get file data
    pbuf->sgetn(buffer, size);

    ifs.close();

    // write content to stdout
    std::cout.write(buffer, size);

    delete[] buffer;

    return 0;
}
