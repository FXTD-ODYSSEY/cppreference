// cppreference link https://en.cppreference.com/w/cpp/locale/time_get/get_monthname
#include <ctime>
#include <iostream>
#include <iterator>
#include <locale>
#include <sstream>
#include <string_view>

void try_get_mon(std::string_view locale_name, std::string_view source)
{
    try {
        std::locale::global(std::locale(locale_name.data()));
    } catch (std::runtime_error const& ex) {
        std::cout << "Cannot setup locale: " << locale_name << "\n"
                                                               "Exception: "
                  << ex.what() << '\n';
        return;
    }

    std::cout << "Parsing the month out of '" << source
              << "' in the locale " << std::locale().name() << '\n';
    std::istringstream str { source.data() };
    std::ios_base::iostate err = std::ios_base::goodbit;

    std::tm t;
    std::time_get<char> const& facet = std::use_facet<std::time_get<char>>(str.getloc());
    std::istreambuf_iterator<char> ret = facet.get_monthname({ str }, {}, str, err, &t);
    str.setstate(err);
    std::istreambuf_iterator<char> last {};

    if (str) {
        std::cout << "Successfully parsed, month number is " << t.tm_mon;

        if (ret != last) {
            std::cout << ". Remaining content: ";
            std::copy(ret, last, std::ostreambuf_iterator<char>(std::cout));
        } else
            std::cout << ". The input was fully consumed";
    } else {
        std::cout << "Parse failed. Unparsed string: ";
        std::copy(ret, last, std::ostreambuf_iterator<char>(std::cout));
    }

    std::cout << '\n';
}

int main()
{
    try_get_mon("ja_JP.utf8", "2月");
    try_get_mon("th_TH.utf8", "กุมภาพันธ์");
    try_get_mon("el_GR.utf8", "Φεβ");
    try_get_mon("el_GR.utf8", "Φεβρουάριος");
    try_get_mon("en_US.utf8", "Febrile");
}
