// cplusplus link https://cplusplus.com/reference/fstream\ifstream\open
// print the content of a text file.
#include <fstream> // std::ifstream
#include <iostream> // std::cout

int main()
{
    std::ifstream ifs;

    ifs.open("test.txt", std::ifstream::in);

    char c = ifs.get();

    while (ifs.good()) {
        std::cout << c;
        c = ifs.get();
    }

    ifs.close();

    return 0;
}
