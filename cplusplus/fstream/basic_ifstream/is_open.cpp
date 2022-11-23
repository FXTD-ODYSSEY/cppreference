// cplusplus link https://cplusplus.com/reference/fstream\basic_ifstream\is_open
// ifstream::is_open
#include <fstream> // std::ifstream
#include <iostream> // std::cout

int main()
{
    std::ifstream ifs("test.txt");

    if (ifs.is_open()) {
        // print file:
        char c = ifs.get();
        while (ifs.good()) {
            std::cout << c;
            c = ifs.get();
        }
    } else {
        // show message:
        std::cout << "Error opening file";
    }

    return 0;
}
