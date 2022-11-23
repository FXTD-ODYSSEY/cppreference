// cplusplus link https://cplusplus.com/reference/fstream\basic_filebuf\open
// filebuf::open()
#include <fstream>
#include <iostream>

int main()
{
    std::ifstream is;
    std::filebuf* fb = is.rdbuf();

    fb->open("test.txt", std::ios::out | std::ios::app);

    // >> appending operations here <<

    fb->close();

    return 0;
}
