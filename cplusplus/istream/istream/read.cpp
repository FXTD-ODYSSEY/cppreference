// cplusplus link https://cplusplus.com/reference/istream\istream\read
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

        char* buffer = new char[length];

        std::cout << "Reading " << length << " characters... ";
        // read data as a block:
        is.read(buffer, length);

        if (is)
            std::cout << "all characters read successfully.";
        else
            std::cout << "error: only " << is.gcount() << " could be read";
        is.close();

        // ...buffer contains the entire file...

        delete[] buffer;
    }
    return 0;
}
