// cppreference link https://en.cppreference.com/w/cpp/ranges/keys_view
#include <iomanip>
#include <iostream>
#include <ranges>
#include <string>
#include <tuple>
#include <vector>

int main()
{
    const std::vector<std::tuple<std::string, double, bool>> quark_mass_charge {
        // name, MeV/c², has positive electric-charge:
        { "up", 2.3, true },
        { "down", 4.8, false },
        { "charm", 1275, true },
        { "strange", 95, false },
        { "top", 173'210, true },
        { "bottom", 4'180, false },
    };

    std::cout << "Quark name:  │ ";
    for (std::string const& name : std::views::keys(quark_mass_charge))
        std::cout << std::setw(9) << name << " │ ";

    std::cout << "\n"
                 "Mass MeV/c²: │ ";
    for (const double mass : std::views::values(quark_mass_charge))
        std::cout << std::setw(9) << mass << " │ ";

    std::cout << "\n"
                 "E-charge:    │ ";
    for (const bool pos : std::views::elements<2>(quark_mass_charge))
        std::cout << std::setw(9) << (pos ? "+2/3" : "-1/3") << " │ ";

    std::cout << '\n';
}
