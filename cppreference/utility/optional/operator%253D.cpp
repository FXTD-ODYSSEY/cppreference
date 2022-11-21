// cppreference link https://en.cppreference.com/w/cpp/utility/optional/operator%3D
#include <iostream>
#include <optional>
int main()
{
    std::optional<const char*> s1 = "abc", s2; // constructor
    s2 = s1; // assignment
    s1 = "def"; // decaying assignment (U = char[4], T = const char*)
    std::cout << *s2 << ' ' << *s1 << '\n';
}
