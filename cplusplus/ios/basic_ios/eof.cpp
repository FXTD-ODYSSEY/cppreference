// cplusplus link https://cplusplus.com/reference/ios\basic_ios\eof
// ios::eof example
#include <fstream> // std::ifstream
#include <iostream> // std::cout

int main()
{

    std::ifstream is("example.txt"); // open file

    char c;
    while (is.get(c)) // loop getting single characters
        std::cout << c;

    if (is.eof()) // check for EOF
        std::cout << "[EoF reached]\n";
    else
        std::cout << "[error reading]\n";

    is.close(); // close file

    return 0;
}
