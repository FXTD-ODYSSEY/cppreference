// cplusplus link https://cplusplus.com/reference/system_error\error_condition\error_condition
// error_condition::error_condition
#include <iostream> // std::cout, std::ios
#include <system_error> // std::error_condition, std::generic_category

int main()
{
    std::cout << "The default error condition: ";
    std::cout << std::error_condition().message() << '\n';

    std::cout << "A condition constructed from errc: ";
    std::cout << std::error_condition(std::errc::permission_denied).message() << '\n';

    std::cout << "Some generic error conditions, by value:\n";
    for (int i = 0; i < 10; ++i) {
        std::error_condition c(i, std::generic_category());
        std::cout << "\t#" << i << ": " << c.message() << '\n';
    }
    return 0;
}
