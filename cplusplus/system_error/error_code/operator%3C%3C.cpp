// cplusplus link https://cplusplus.com/reference/system_error\error_code\operator%3C%3C
// error_code::operator<<
#include <fstream> // std::ifstream
#include <iostream> // std::cout, std::ios
#include <system_error> // std::system_error

int main()
{
    std::ifstream is;
    is.exceptions(std::ios::failbit);
    try {
        is.open("unexistent.txt");
    } catch (const std::system_error& e) {
        std::cout << "Exception caught:\n";
        std::cout << e.code() << " = " << e.what() << '\n';
    }
}
