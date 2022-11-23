// cplusplus link https://cplusplus.com/reference/ios\ios\operator_bool
// evaluating a stream
#include <fstream> // std::ifstream
#include <iostream> // std::cerr

int main()
{
    std::ifstream is;
    is.open("test.txt");
    if (is) {
        // read file
    } else {
        std::cerr << "Error opening 'test.txt'\n";
    }
    return 0;
}
