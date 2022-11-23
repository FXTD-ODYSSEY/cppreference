// cplusplus link https://cplusplus.com/reference/ios\io_errc
// io_errc example
#include <iostream> // std::cin, std::cerr, std::ios,
    // std::make_error_condition, std::ios_errc
int main()
{
    std::cin.exceptions(std::ios::failbit | std::ios::badbit);
    try {
        std::cin.rdbuf(nullptr); // throws
    } catch (std::ios::failure& e) {
        std::cerr << "failure caught: ";
        if (e.code() == std::make_error_condition(std::io_errc::stream))
            std::cerr << "stream error condition\n";
        else
            std::cerr << "some other error condition\n";
    }

    return 0;
}
