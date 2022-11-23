// cplusplus link https://cplusplus.com/reference/ios\basic_ios\operator_not
// evaluating a stream (not)
#include <fstream> // std::ifstream
#include <iostream> // std::cout

int main()
{
    std::ifstream is;
    is.open("test.txt");
    if (!is)
        std::cerr << "Error opening 'test.txt'\n";
    return 0;
}
