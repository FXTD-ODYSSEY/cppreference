// cppreference link https://en.cppreference.com/w/cpp/locale/time_get/get
#include <iomanip>
#include <iostream>
#include <locale>
#include <sstream>

int main()
{
    std::istringstream ss("2011-Februar-18 23:12:34");
    ss.imbue(std::locale("de_DE.utf8"));

    auto& f = std::use_facet<std::time_get<char>>(std::locale("de_DE.utf8"));
    std::tm t {};
    std::string s = "%Y-%b-%d%H:%M:%S";
    std::ios_base::iostate err = std::ios_base::goodbit;
    auto ret = f.get({ ss }, {}, ss, err, &t, &s[0], &s[0] + s.size());
    ss.setstate(err);
    std::istreambuf_iterator<char> last {};
    if (ss) {
        std::cout << "Successfully parsed as " << std::put_time(&t, "%c");
        if (ret != last) {
            std::cout << " Remaining content: ";
            std::copy(ret, last, std::ostreambuf_iterator<char>(std::cout));
        } else {
            std::cout << " The input was fully consumed";
        }
    } else {
        std::cout << "Parse failed. Unparsed string: ";
        std::copy(ret, last, std::ostreambuf_iterator<char>(std::cout));
    }
    std::cout << '\n';
}
