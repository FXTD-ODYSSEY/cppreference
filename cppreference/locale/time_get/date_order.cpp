// cppreference link https://en.cppreference.com/w/cpp/locale/time_get/date_order
#include <iostream>
#include <locale>

void show_date_order()
{
    std::time_base::dateorder d = std::use_facet<std::time_get<char>>(
        std::locale())
                                      .date_order();
    switch (d) {
    case std::time_base::no_order:
        std::cout << "no_order\n";
        break;
    case std::time_base::dmy:
        std::cout << "day, month, year\n";
        break;
    case std::time_base::mdy:
        std::cout << "month, day, year\n";
        break;
    case std::time_base::ymd:
        std::cout << "year, month, day\n";
        break;
    case std::time_base::ydm:
        std::cout << "year, day, month\n";
        break;
    }
}

int main()
{
    std::locale::global(std::locale("en_US.utf8"));
    std::cout << "In U.S. locale, the default date order is: ";
    show_date_order();

    std::locale::global(std::locale("ja_JP.utf8"));
    std::cout << "In Japanese locale, the default date order is: ";
    show_date_order();

    std::locale::global(std::locale("de_DE.utf8"));
    std::cout << "In German locale, the default date order is: ";
    show_date_order();
}
