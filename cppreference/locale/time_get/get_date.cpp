// cppreference link https://en.cppreference.com/w/cpp/locale/time_get/get_date
#include <ctime>
#include <iostream>
#include <iterator>
#include <locale>
#include <sstream>

void try_get_date(const std::string& s)
{
    std::cout << "Parsing the date out of '" << s
              << "' in the locale " << std::locale().name() << '\n';
    std::istringstream str(s);
    std::ios_base::iostate err = std::ios_base::goodbit;

    std::tm t;
    std::time_get<char> facet = std::use_facet<std::time_get<char>>(str.getloc())
        std::istreambuf_iterator<char>
            ret = facet.get_date({ str }, {}, str, err, &t);
    str.setstate(err);

    if (str) {
        std::cout << "Day: " << t.tm_mday << ' '
                  << "Month: " << t.tm_mon + 1 << ' '
                  << "Year: " << t.tm_year + 1900 << '\n';
    } else {
        std::cout << "Parse failed. Unparsed string: ";
        std::copy(ret, {}, std::ostreambuf_iterator<char>(std::cout));
        std::cout << '\n';
    }
}
int main()
{
    std::locale::global(std::locale("en_US.utf8"));
    try_get_date("02/01/2013");
    try_get_date("02-01-2013");

    std::locale::global(std::locale("ja_JP.utf8"));
    try_get_date("2013年02月01日");
}
