// cppreference link https://en.cppreference.com/w/cpp/locale/time_get/get_time
#include <iostream>
#include <iterator>
#include <locale>
#include <sstream>

void try_get_time(const std::string& s)
{
    std::cout << "Parsing the time out of '" << s
              << "' in the locale " << std::locale().name() << '\n';
    std::istringstream str(s);
    std::ios_base::iostate err = std::ios_base::goodbit;

    std::tm t;
    std::time_get<char> const& facet = std::use_facet<std::time_get<char>>(str.getloc());
    std::istreambuf_iterator<char> ret = facet.get_time({ str }, {}, str, err, &t);
    str.setstate(err);

    if (str) {
        std::cout << "Hours: " << t.tm_hour << ", "
                                               "Minutes: "
                  << t.tm_min << ", "
                                 "Seconds: "
                  << t.tm_sec << '\n';
    } else {
        std::cout << "Parse failed. Unparsed string: ";
        std::copy(ret, {}, std::ostreambuf_iterator<char>(std::cout));
        std::cout << '\n';
    }
}
int main()
{
    std::locale::global(std::locale("ru_RU.utf8"));
    try_get_time("21:40:11");
    try_get_time("21-40-11");

    std::locale::global(std::locale("ja_JP.utf8"));
    try_get_time("21時37分58秒");
}
