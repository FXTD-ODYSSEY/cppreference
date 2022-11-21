// cppreference link https://en.cppreference.com/w/cpp/chrono/duration/operator%3D
#include <chrono>
#include <iostream>

int main()
{
    using namespace std::chrono_literals;

    std::chrono::hours z_hours {};
    std::chrono::seconds z_seconds {};

    z_hours = 2h; // ok, no conversion needed

    z_seconds = z_hours;
    // First, the converting ctor is used to create a temporary object of `lhs`s type.
    // This ctor implicitly invokes the casting function
    // chrono::duration_cast<std::seconds>(z_hours). The resulting `rhs` rvalue
    // has the same type as `lhs`, and the `operator=` finally performs the assignment.

    std::cout << "hours: " << z_hours.count() << '\n';
    std::cout << "seconds: " << z_seconds.count() << '\n';

    z_seconds -= 42s;

    //  z_hours = z_seconds; // compile-time error (which is good): incompatible types.
    // The library avoids the implicit cast to prevent a potential precision loss.

    z_hours = std::chrono::duration_cast<std::chrono::hours>(z_seconds); // ok
    z_hours = std::chrono::duration_cast<decltype(z_hours)>(z_seconds); // ditto

    std::cout << "hours: " << z_hours.count() << '\n';
    std::cout << "seconds: " << z_seconds.count() << '\n';

    std::chrono::duration<double, std::ratio<3600>> z2_hours {};

    z2_hours = z_seconds; // ok, no truncation, implicit cast

    std::cout << "hours: " << z2_hours.count() << '\n';
}
