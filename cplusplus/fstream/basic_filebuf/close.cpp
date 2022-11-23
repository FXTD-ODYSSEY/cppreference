// cplusplus link https://cplusplus.com/reference/fstream\basic_filebuf\close
// filebuf::close()
#include <fstream>
#include <iostream>

int main()
{
    std::ifstream is;
    std::filebuf* fb = is.rdbuf();

    fb->open("test.txt", std::ios::in);

    // appending operations

    fb->close();

    return 0;
}
