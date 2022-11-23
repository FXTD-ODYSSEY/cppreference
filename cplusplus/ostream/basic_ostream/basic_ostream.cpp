// cplusplus link https://cplusplus.com/reference/ostream\basic_ostream\basic_ostream
// ostream constructor
#include <fstream> // std::filebuf
#include <iostream> // std::cout, std::ostream, std::ios

int main()
{
    std::filebuf fb;
    fb.open("test.txt", std::ios::out);
    std::ostream os(&fb);
    os << "Test sentence\n";
    fb.close();
    return 0;
}
