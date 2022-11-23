// cplusplus link https://cplusplus.com/reference/system_error\error_code\error_code
// error_code constructors
#include <cerrno> // errno
#include <cmath> // std::sqrt
#include <iostream> // std::cout
#include <system_error> // std::error_code, std::generic_category
    // std::error_condition
int main()
{
    errno = 0;
    std::sqrt(-1.0); // errno set to EDOM
    std::error_code ec(errno, std::generic_category());

    std::error_condition ok;
    if (ec != ok)
        std::cout << "Error: " << ec.message() << '\n';

    return 0;
}
