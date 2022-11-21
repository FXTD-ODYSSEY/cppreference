// cppreference link https://en.cppreference.com/w/cpp/locale/money_get/get
#include <iostream>
#include <locale>
#include <sstream>

void demo_money_get(std::locale loc, const std::string& input)
{
    std::istringstream str(input);
    str.imbue(loc);
    long double units;
    // note, the following can be written simple with std::get_money(units)
    std::ios_base::iostate err = std::ios_base::goodbit;
    std::istreambuf_iterator<char> ret = std::use_facet<std::money_get<char>>(loc).get(
        std::istreambuf_iterator<char>(str),
        std::istreambuf_iterator<char>(),
        false, str, err, units);
    str.setstate(err);
    std::istreambuf_iterator<char> last {};
    if (str) {
        std::cout << "Successfully parsed '" << str.str() << "' as "
                  << units / 100 << " units\n";
        if (ret != last) {
            std::cout << "Remaining content: '";
            std::copy(ret, last, std::ostreambuf_iterator<char>(std::cout));
            std::cout << "'\n";
        } else {
            std::cout << "The input was fully consumed\n";
        }
    } else {
        std::cout << "Parse failed. Unparsed string: '";
        std::copy(ret, last, std::ostreambuf_iterator<char>(std::cout));
        std::cout << "'\n";
    }
}

int main()
{
    demo_money_get(std::locale("en_US.utf8"), "-$5.12 abc");
    demo_money_get(std::locale("ms_MY.utf8"), "(RM5.12) def");
}
