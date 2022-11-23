// cplusplus link https://cplusplus.com/reference/istream\basic_istream\basic_istream
// istream constructor
#include <fstream> // std::filebuf
#include <iostream> // std::ios, std::istream, std::cout

int main()
{
    std::filebuf fb;
    if (fb.open("test.txt", std::ios::in)) {
        std::istream is(&fb);
        while (is)
            std::cout << char(is.get());
        fb.close();
    }
    return 0;
}
