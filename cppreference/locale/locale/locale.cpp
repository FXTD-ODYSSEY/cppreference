// cppreference link https://en.cppreference.com/w/cpp/locale/locale/locale
#include <codecvt>
#include <iostream>
#include <locale>

std::ostream& operator<<(std::ostream& os, std::locale const& loc)
{
    if (loc.name().length() <= 80) {
        return os << loc.name() << '\n';
    }

    for (const auto c : loc.name()) {
        c != ';' ? os << c : os << "\n    ";
    }
    return os << '\n';
}

int main()
{
    std::locale l1;
    // l1 is a copy of the classic "C" locale
    std::locale l2("en_US.UTF-8");
    // l2 is a unicode locale
    std::locale l3(l1, l2, std::locale::ctype);
    // l3 is "C" except for ctype, which is unicode
    std::locale l4(l1, new std::codecvt_utf8<wchar_t>);
    // l4 is "C" except for codecvt
    std::cout
        << "Locale names:\n"
        << "l1: " << l1 << "l2: " << l2
        << "l3: " << l3 << "l4: " << l4;
}
