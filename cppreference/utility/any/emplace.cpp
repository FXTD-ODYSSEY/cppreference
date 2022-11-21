// cppreference link https://en.cppreference.com/w/cpp/utility/any/emplace
#include <algorithm>
#include <any>
#include <iostream>
#include <string>
#include <vector>

class Star {
    std::string name;
    int id;

public:
    Star(std::string name, int id)
        : name { name }
        , id { id }
    {
        std::cout << "Star::Star(string, int)\n";
    }

    void print() const
    {
        std::cout << "Star{ \"" << name << "\": " << id << " };\n";
    }
};

auto main() -> int
{
    std::any celestial;
    // (1) emplace( Args&&... args );
    celestial.emplace<Star>("Procyon", 2943);
    const auto* star = std::any_cast<Star>(&celestial);
    star->print();

    std::any av;
    // (2) emplace( std::initializer_list<U> il, Args&&... args );
    av.emplace<std::vector<char>>({ 'C', '+', '+', '1', '7' } /* no args */);
    std::cout << av.type().name() << '\n';
    const auto* va = std::any_cast<std::vector<char>>(&av);
    std::for_each(va->cbegin(), va->cend(), [](char const& c) { std::cout << c; });
    std::cout << '\n';
}
