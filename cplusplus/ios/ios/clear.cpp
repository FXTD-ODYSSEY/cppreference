// cplusplus link https://cplusplus.com/reference/ios\ios\clear
// clearing errors
#include <fstream> // std::fstream
#include <iostream> // std::cout

int main()
{
    char buffer[80];
    std::fstream myfile;

    myfile.open("test.txt", std::fstream::in);

    myfile << "test";
    if (myfile.fail()) {
        std::cout << "Error writing to test.txt\n";
        myfile.clear();
    }

    myfile.getline(buffer, 80);
    std::cout << buffer << " successfully read from file.\n";

    return 0;
}
