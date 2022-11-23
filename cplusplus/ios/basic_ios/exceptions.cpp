// cplusplus link https://cplusplus.com/reference/ios\basic_ios\exceptions
// basic_ios::exceptions
#include <fstream> // std::ifstream
#include <iostream> // std::cerr

int main()
{
    std::ifstream file;
    file.exceptions(std::ifstream::failbit | std::ifstream::badbit);
    try {
        file.open("test.txt");
        while (!file.eof())
            file.get();
    } catch (std::ifstream::failure e) {
        std::cerr << "Exception opening/reading file";
    }

    file.close();

    return 0;
}
