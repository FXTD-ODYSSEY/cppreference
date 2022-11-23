// cplusplus link https://cplusplus.com/reference/fstream\fstream\is_open
// fstream::is_open
#include <fstream> // std::fstream
#include <iostream> // std::cout

int main()
{
    std::fstream fs;
    fs.open("test.txt");
    if (fs.is_open()) {
        fs << "lorem ipsum";
        std::cout << "Operation successfully performed\n";
        fs.close();
    } else {
        std::cout << "Error opening file";
    }
    return 0;
}
