// cppreference link https://en.cppreference.com/w/cpp/language/derived_class
#include <iostream>
#include <string>
#include <vector>

struct MenuOption {
    std::string title;
};

// Menu is a vector of MenuOption: options can be inserted, removed, reordered...
// and has a title.
class Menu : public std::vector<MenuOption> {
public:
    std::string title;

    void print() const
    {
        std::cout << title << ":\n";
        for (std::size_t i = 0, s = size(); i < s; ++i)
            std::cout << "  " << (i + 1) << ". " << at(i).title << '\n';
    }
};
// Note: Menu::title is not problematic because its role is independent of the base class.

enum class Color { WHITE,
    RED,
    BLUE,
    GREEN };

void apply_terminal_color(Color)
{ /* OS-specific */
}

// THIS IS BAD!
// ColorMenu is a Menu where every option has a custom color.
class ColorMenu : public Menu {
public:
    std::vector<Color> colors;

    void print() const
    {
        std::cout << title << ":\n";

        for (std::size_t i = 0, s = size(); i < s; ++i) {
            std::cout << "  " << (i + 1) << ". ";
            apply_terminal_color(colors[i]);
            std::cout << at(i).title << '\n';
            apply_terminal_color(Color::WHITE);
        }
    }
};
// ColorMenu needs the following invariants that cannot be satisfied
// by publicly inheriting from Menu, for example:
// - ColorMenu::colors and Menu must have the same number of elements
// - To make sense, calling erase() should remove also elements from colors,
//   in order to let options keep their colors
// Basically every non-const call to a std::vector method will break the invariant
// of the ColorMenu and will need fixing from the user by correctly managing colors.

int main()
{
    ColorMenu color_menu;

    // The big problem of this class is that we must keep ColorMenu::Color
    // in sync with Menu.
    color_menu.push_back(MenuOption { "Some choice" });

    // color_menu.print(); // ERROR! colors[i] in print() is out of range

    color_menu.colors.push_back(Color::RED);

    color_menu.print(); // OK: colors and Menu has the same number of elements
}
