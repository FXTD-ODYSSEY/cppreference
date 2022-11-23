// cplusplus link https://cplusplus.com/reference/locale\time_get\date_order
// time_get::date_order example
#include <iostream> // std::cout
#include <locale> // std::locale, std::time_get, std::use_facet

int main()
{
    std::locale loc;
    std::time_get<char>::dateorder order;
    order = std::use_facet<std::time_get<char>>(loc).date_order();
    switch (order) {
    case std::time_get<char>::no_order:
        std::cout << "no_order";
        break;
    case std::time_get<char>::dmy:
        std::cout << "dmy";
        break;
    case std::time_get<char>::mdy:
        std::cout << "mdy";
        break;
    case std::time_get<char>::ymd:
        std::cout << "ymd";
        break;
    case std::time_get<char>::ydm:
        std::cout << "ydm";
        break;
    }
    std::cout << '\n';
    return 0;
}
