// cplusplus link https://cplusplus.com/reference/ios\basic_ios\rdstate
// getting the state of stream objects
#include <fstream> // std::ifstream
#include <iostream> // std::cerr

int main()
{
    std::ifstream is;
    is.open("test.txt");
    if ((is.rdstate() & std::ifstream::failbit) != 0)
        std::cerr << "Error opening 'test.txt'\n";
    return 0;
}
