// cplusplus link https://cplusplus.com/reference/istream\istream\tellg
// read a file into memory
#include <fstream> // std::ifstream
#include <iostream> // std::cout

int main()
{
    std::ifstream is("test.txt", std::ifstream::binary);
    if (is) {
        // get length of file:
        is.seekg(0, is.end);
        int length = is.tellg();
        is.seekg(0, is.beg);

        // allocate memory:
        char* buffer = new char[length];

        // read data as a block:
        is.read(buffer, length);

        is.close();

        // print content:
        std::cout.write(buffer, length);

        delete[] buffer;
    }

    return 0;
}
