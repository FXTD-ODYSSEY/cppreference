// cplusplus link https://cplusplus.com/reference/ios\ios\exceptions
// ios::exceptions
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
        file.close();
    } catch (std::ifstream::failure e) {
        std::cerr << "Exception opening/reading/closing file\n";
    }

    return 0;
}
