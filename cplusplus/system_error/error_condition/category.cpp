// cplusplus link https://cplusplus.com/reference/system_error\error_condition\category
// error_condition observers: value, category and message
#include <fstream> // std::ifstream
#include <iostream> // std::cout, std::ios
#include <string> // std::string
#include <system_error> // std::system_error, std::error_condition

int main()
{
    std::ifstream is;
    is.exceptions(std::ios::failbit);
    try {
        is.open("unexistent.txt");
    } catch (std::system_error excptn) {
        std::error_condition cond = excptn.code().default_error_condition();
        std::cout << "Exception caught (system_error):\n";
        std::cout << "Value: " << cond.value() << '\n';
        std::cout << "Category: " << cond.category().name() << '\n';
        std::cout << "Message: " << cond.message() << '\n';
    }
    return 0;
}
