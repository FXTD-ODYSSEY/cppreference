// cplusplus link https://cplusplus.com/reference/system_error\error_code\category
// error_code observers: value, category and message
#include <fstream> // std::ifstream
#include <iostream> // std::cout, std::ios
#include <string> // std::string
#include <system_error> // std::system_error

int main()
{
    std::ifstream is;
    is.exceptions(std::ios::failbit);
    try {
        is.open("unexistent.txt");
    } catch (const std::system_error& e) {
        std::cout << "Exception caught (system_error):\n";
        std::cout << "Error: " << e.what() << '\n';
        std::cout << "Code: " << e.code().value() << '\n';
        std::cout << "Category: " << e.code().category().name() << '\n';
        std::cout << "Message: " << e.code().message() << '\n';
    }
    return 0;
}
