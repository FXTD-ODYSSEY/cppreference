// cppreference link https://en.cppreference.com/w/cpp/experimental/optional/operator%3D
#include <experimental/optional>
#include <iostream>
int main()
{
    std::experimental::optional<const char*> s1 = "abc", s2; // constructor
    s2 = s1; // assignment
    s1 = "def"; // decaying assignment (U = char[4], T = const char*)
    std::cout << *s2 << ' ' << *s1 << '\n';
}
