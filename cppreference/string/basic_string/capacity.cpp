// cppreference link https://en.cppreference.com/w/cpp/string/basic_string/capacity
#include <iomanip>
#include <iostream>
#include <string>

void show_capacity(std::string const& s)
{
    std::cout << std::quoted(s) << " has capacity " << s.capacity() << ".\n";
}

int main()
{
    std::string s { "Exemplar" };
    show_capacity(s);

    s += " is an example string.";
    show_capacity(s);

    s.clear();
    show_capacity(s);

    std::cout << "\nDemonstrate the capacity's growth policy."
                 "\nSize:  Capacity:  Ratio:\n"
              << std::left;

    std::string g;
    auto old_cap { g.capacity() };

    for (int mark {}; mark != 5; ++mark) {
        while (old_cap == g.capacity())
            g.push_back('.');

        std::cout << std::setw(7) << g.size()
                  << std::setw(11) << g.capacity()
                  << std::setw(10) << g.capacity() / static_cast<float>(old_cap) << '\n';

        old_cap = g.capacity();
    }
}
