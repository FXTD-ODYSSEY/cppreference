// cppreference link https://en.cppreference.com/w/cpp/regex/regex_traits/lookup_collatename
#include <iostream>
#include <regex>
#include <string>

struct noisy_traits : std::regex_traits<char> {

    template <class Iter>
    string_type lookup_collatename(Iter first, Iter last) const
    {
        string_type result = regex_traits::lookup_collatename(first, last);
        std::cout << "regex_traits<>::lookup_collatename(\""
                  << string_type(first, last)
                  << "\") returns \"" << result << "\"\n";
        return result;
    }
};

int main()
{
    std::string str = "z|}a"; // C locale collation order: x,y,z,{,|,},~
    std::basic_regex<char, noisy_traits> re("[x-[.tilde.]]*a", std::regex::basic);
    std::cout << std::boolalpha << std::regex_match(str, re) << '\n';
}
