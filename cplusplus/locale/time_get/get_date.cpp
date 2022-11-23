// cplusplus link https://cplusplus.com/reference/locale\time_get\get_date
// time_get::get_date example
#include <ctime> // std::tm
#include <iostream> // std::cout, std::ios
#include <locale> // std::locale, std::time_get, std::use_facet
#include <sstream> // std::istringstream

int main()
{
    std::locale loc; // classic "C" locale

    // get time_get facet:
    const std::time_get<char>& tmget = std::use_facet<std::time_get<char>>(loc);

    std::ios::iostate state;
    std::istringstream iss("01/02/03");
    std::tm when;

    tmget.get_date(iss, std::time_get<char>::iter_type(), iss, state, &when);

    std::cout << "year: " << when.tm_year << '\n';
    std::cout << "month: " << when.tm_mon << '\n';
    std::cout << "day: " << when.tm_mday << '\n';
    return 0;
}
