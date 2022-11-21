// cppreference link https://en.cppreference.com/w/cpp/locale/num_get/get
#include <iostream>
#include <iterator>
#include <locale>

struct base {
    long x;
};

template <class CharT, class Traits>
std::basic_istream<CharT, Traits>&
operator>>(std::basic_istream<CharT, Traits>& is, base& b)
{
    std::ios_base::iostate err = std::ios_base::goodbit;

    try // setting err could throw
    {
        typename std::basic_istream<CharT, Traits>::sentry s(is);

        if (s) // if stream is ready for input
        {
            std::use_facet<std::num_get<CharT>>(is.getloc()).get(is, {}, is, err, b.x);
        }
    } catch (std::ios_base::failure& error) {
        // handle the exception
    }

    return is;
}

int main()
{
    base b;
    std::cin >> b;
}
