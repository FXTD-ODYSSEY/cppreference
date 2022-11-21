// cppreference link https://en.cppreference.com/w/cpp/io/ios_base/width
#include <array>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <tuple>

int main()
{
    auto str_time = [](int year, int mon, int day) {
        constexpr std::array<const char*, 7> week_day { { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" } };

        std::tm tm {};
        tm.tm_year = year - 1900;
        tm.tm_mon = mon - 1;
        tm.tm_mday = day;

        day += mon < 3 ? year-- : year - 2;
        tm.tm_wday = (23 * mon / 9 + day + 4 + year / 4 - year / 100 + year / 400) % 7;

        std::ostringstream out;
        out << week_day[tm.tm_wday] << ", " << std::put_time(&tm, "%B%d,%Y");
        return out.str();
    };

    constexpr int column_size = 4;
    using table_t = std::array<std::string, column_size>;

    table_t headers { { "Name", "Birthdate", "Death date", "Language Created" } };

    std::array<table_t, 5> data { { { { "Dennis Ritchie", str_time(1941, 9, 9), str_time(2011, 10, 12), "C" } },
        { { "Bjarne Stroustrup", str_time(1950, 12, 30), "", "C++" } },
        { { "Anders Hejlsberg", str_time(1960, 12, 2), "", "C#" } },
        { { "Guido van Rossum", str_time(1956, 1, 31), "", "Python" } },
        { { "Brendan Eich", str_time(1961, 7, 4), "", "Javascript" } } } };

    constexpr int name_wid = 20;
    constexpr int birth_wid = 30;
    constexpr int death_wid = 30;
    constexpr int lang_wid = 18;

    auto print_line = [](table_t const& tbl) {
        auto const& [Name, Birthdate, DeathDate, LanguageCreated] = tbl;

        std::cout.width(name_wid);
        std::cout << ("| " + Name) << '|';

        std::cout.width(birth_wid);
        std::cout << (' ' + Birthdate) << '|';

        std::cout.width(death_wid);
        std::cout << (' ' + DeathDate) << '|';

        std::cout.width(lang_wid);
        std::cout << (' ' + LanguageCreated) << '|';

        std::cout << '\n';
    };

    constexpr int total_wid = name_wid + birth_wid + death_wid + lang_wid + column_size;

    auto print_break = [] {
        std::cout.width(total_wid);
        std::cout.fill('-');
        std::cout << '-' << '\n';
        std::cout.fill(' ');
    };

    std::cout.setf(std::ios::left, std::ios::adjustfield);
    print_break();
    print_line(headers);
    print_break();
    for (auto const& entry : data)
        print_line(entry);
    print_break();
}
