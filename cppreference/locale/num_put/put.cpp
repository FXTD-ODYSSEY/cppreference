// cppreference link https://en.cppreference.com/w/cpp/locale/num_put/put
#include <iostream>
#include <iterator>
#include <locale>

struct base {
    long x = 10;
};

template <class CharT, class Traits>
std::basic_ostream<CharT, Traits>&
operator<<(std::basic_ostream<CharT, Traits>& os, base const& b)
{
    try {
        typename std::basic_ostream<CharT, Traits>::sentry s(os);

        if (s) {
            std::ostreambuf_iterator<CharT, Traits> it(os);
            std::use_facet<std::num_put<CharT>>(os.getloc())
                .put(it, os, os.fill(), b.x);
        }
    } catch (...) {
        // set badbit on os and rethrow if required
    }

    return os;
}

int main()
{
    base b;
    std::cout << b;
}
