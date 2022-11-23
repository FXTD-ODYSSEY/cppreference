// cplusplus link https://cplusplus.com/reference/ios\ios\copyfmt
// copying formatting information
#include <fstream> // std::ofstream
#include <iostream> // std::cout

int main()
{
    std::ofstream filestr;
    filestr.open("test.txt");

    std::cout.fill('*');
    std::cout.width(10);
    filestr.copyfmt(std::cout);

    std::cout << 40;
    filestr << 40;

    return 0;
}
