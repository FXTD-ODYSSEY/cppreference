// cppreference link https://en.cppreference.com/w/cpp/io/io_errc/make_error_condition
#include <iostream>
#include <string>
#include <system_error>

int main()
{
    std::error_condition ec = std::make_error_condition(std::io_errc::stream);
    std::cout << "error condition for io_errc::stream has value " << ec.value()
              << "\nand message \"" << ec.message() << "\"\n";
}
