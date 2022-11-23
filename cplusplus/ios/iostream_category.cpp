// cplusplus link https://cplusplus.com/reference/ios\iostream_category
// io_errc example
// iostream_category example
#include <iostream> // std::cin, std::cerr, std::ios,
    // std::iostream_category
int main()
{
    std::cin.exceptions(std::ios::failbit | std::ios::badbit);
    try {
        std::cin.rdbuf(nullptr); // throws
    } catch (std::ios::failure& e) {
        std::cerr << "failure caught: ";
        if (e.code().category() == std::iostream_category())
            std::cerr << "error code of the iostream category\n";
        else
            std::cerr << "error code of some other category\n";
    }
    return 0;
}
