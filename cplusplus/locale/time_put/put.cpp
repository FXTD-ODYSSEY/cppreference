// cplusplus link https://cplusplus.com/reference/locale\time_put\put
// time_put example
// time_put::put example
#include <ctime> // std::time, std::localtime, std::tm, std::time_t
#include <iostream> // std::cout
#include <locale> // std::locale, std::time_put, std::use_facet
#include <string> // std::string

int main()
{
    std::locale loc; // classic "C" locale

    // get time_put facet:
    const std::time_put<char>& tmput = std::use_facet<std::time_put<char>>(loc);

    std::time_t timestamp;
    std::time(&timestamp);
    std::tm* now = std::localtime(&timestamp);

    // using pattern string:
    std::string pattern("Now it's: %I:%M%p\n");
    tmput.put(std::cout, std::cout, ' ', now, pattern.data(), pattern.data() + pattern.length());

    // using single specifier:
    std::cout << "Now it's: ";
    tmput.put(std::cout, std::cout, ' ', now, 'X');
    std::cout << '\n';
    return 0;
}
