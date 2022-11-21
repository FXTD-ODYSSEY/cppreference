// cppreference link https://en.cppreference.com/w/cpp/locale/time_get/get_weekday
#include <initializer_list>
#include <iostream>
#include <iterator>
#include <locale>
#include <sstream>
#include <string_view>

void try_get_wday(std::string_view s)
{
    std::cout << "Parsing the weekday out of '" << s
              << "' in the locale " << std::locale().name() << '\n';
    std::istringstream str { s.data() };
    std::ios_base::iostate err { std::ios_base::goodbit };

    std::tm t;
    std::time_get<char> const& facet = std::use_facet<std::time_get<char>>(str.getloc());
    std::istreambuf_iterator<char> ret = facet.get_weekday({ str }, {}, str, err, &t);
    str.setstate(err);
    std::istreambuf_iterator<char> last {};

    if (str) {
        std::cout << "Successfully parsed, weekday number is " << t.tm_wday;

        if (ret != last) {
            std::cout << " Remaining content: ";
            std::copy(ret, last, std::ostreambuf_iterator<char>(std::cout));
        } else
            std::cout << " the input was fully consumed";
    } else {
        std::cout << "Parse failed. Unparsed string: ";
        std::copy(ret, last, std::ostreambuf_iterator<char>(std::cout));
    }

    std::cout << '\n';
}

void demo(std::string_view locale_name, std::initializer_list<std::string_view>&& data)
{
    try {
        std::locale::global(std::locale(locale_name.data()));
    } catch (std::runtime_error const& ex) {
        std::cout << "Cannot setup locale: " << locale_name << "\n"
                                                               "Exception: "
                  << ex.what() << '\n';
        return;
    }

    for (std::string_view const weekday : data)
        try_get_wday(weekday);
}

int main()
{
    demo("lt_LT.utf8", {
                           "Št",
                           "Šeštadienis",
                       });
    demo("en_US.utf8", {
                           "SATELLITE",
                       });
    demo("ja_JP.utf8", {
                           "土曜日",
                       });
}
