// cplusplus link https://cplusplus.com/reference/fstream\basic_ofstream\is_open
// ofstream::is_open
#include <fstream> // std::ofstream
#include <iostream> // std::cout

int main()
{
    std::ofstream ofs;
    ofs.open("test.txt");
    if (ofs.is_open()) {
        ofs << "lorem ipsum";
        std::cout << "Output operation successfully performed\n";
        ofs.close();
    } else {
        std::cout << "Error opening file";
    }
    return 0;
}
