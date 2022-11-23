// cplusplus link https://cplusplus.com/reference/fstream\basic_filebuf\is_open
// filebuf::is_open() example
#include <fstream>
#include <iostream>

int main()
{
    std::ifstream is;
    std::filebuf* fb = is.rdbuf();
    fb->open("test.txt", std::ios::in);

    if (fb->is_open())
        std::cout << "the file is open.\n";
    else
        std::cout << "the file is not open.\n";

    fb->close();

    return 0;
}
