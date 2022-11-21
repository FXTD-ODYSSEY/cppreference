// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/stable_sort
#include <algorithm>
#include <array>
#include <functional>
#include <iomanip>
#include <iostream>

void print(auto const& seq)
{
    for (auto const& elem : seq)
        std::cout << elem << ' ';
    std::cout << '\n';
}

struct Particle {
    std::string name;
    double mass; // MeV
    friend std::ostream& operator<<(std::ostream& os, Particle const& p)
    {
        return os << "\n"
                  << std::left << std::setw(8) << p.name << ": " << p.mass;
    }
};

int main()
{
    std::array s { 5, 7, 4, 2, 8, 6, 1, 9, 0, 3 };

    // sort using the default operator<
    std::ranges::stable_sort(s);
    print(s);

    // sort using a standard library compare function object
    std::ranges::stable_sort(s, std::ranges::greater());
    print(s);

    // sort using a custom function object
    struct {
        bool operator()(int a, int b) const
        {
            return a < b;
        }
    } customLess;
    std::ranges::stable_sort(s.begin(), s.end(), customLess);
    print(s);

    // sort using a lambda expression
    std::ranges::stable_sort(s, [](int a, int b) {
        return a > b;
    });
    print(s);

    // sort with projection
    Particle particles[] {
        { "Electron", 0.511 },
        { "Muon", 105.66 },
        { "Tau", 1776.86 },
        { "Positron", 0.511 },
        { "Proton", 938.27 },
        { "Neutron", 939.57 },
    };
    print(particles);
    std::ranges::stable_sort(particles, {}, &Particle::name); //< sort by name
    print(particles);
    std::ranges::stable_sort(particles, {}, &Particle::mass); //< sort by mass
    print(particles);
}
