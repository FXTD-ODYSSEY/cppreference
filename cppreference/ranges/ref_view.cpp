// cppreference link https://en.cppreference.com/w/cpp/ranges/ref_view
#include <iostream>
#include <ranges>

int main()
{
    const std::string s { "cosmos" };

    const std::ranges::take_view tv { s, 3 };
    const std::ranges::ref_view rv { tv };

    std::cout
        << std::boolalpha
        << "call empty(): " << rv.empty() << '\n'
        << "call size() : " << rv.size() << '\n'
        << "call begin(): " << *rv.begin() << '\n'
        << "call end()  : " << *(rv.end() - 1) << '\n'
        << "call data() : " << rv.data() << '\n'
        << "call base() : " << rv.base().size() << '\n' // ~> tv.size()
        << "range-for   : ";

    for (const auto c : rv) {
        std::cout << c;
    }
    std::cout << '\n';
}
