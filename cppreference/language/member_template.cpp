// cppreference link https://en.cppreference.com/w/cpp/language/member_template
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

struct Printer { // generic functor
    std::ostream& os;
    Printer(std::ostream& os)
        : os(os)
    {
    }
    template <typename T>
    void operator()(const T& obj) { os << obj << ' '; } // member template
};

int main()
{
    std::vector<int> v = { 1, 2, 3 };
    std::for_each(v.begin(), v.end(), Printer(std::cout));
    std::string s { "abc" };
    std::ranges::for_each(s, Printer(std::cout));
}
