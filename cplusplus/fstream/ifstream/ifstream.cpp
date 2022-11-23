// cplusplus link https://cplusplus.com/reference/fstream\ifstream\ifstream
// ifstream constructor.
#include <fstream> // std::ifstream
#include <iostream> // std::cout

int main()
{

    std::ifstream ifs("test.txt", std::ifstream::in);

    char c = ifs.get();

    while (ifs.good()) {
        std::cout << c;
        c = ifs.get();
    }

    ifs.close();

    return 0;
}
