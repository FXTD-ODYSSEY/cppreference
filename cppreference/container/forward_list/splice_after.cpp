// cppreference link https://en.cppreference.com/w/cpp/container/forward_list/splice_after
#include <algorithm>
#include <cassert>
#include <forward_list>
#include <initializer_list>
#include <iostream>

using F = std::forward_list<int>;

std::ostream& operator<<(std::ostream& os, F const& l)
{
    for (int e : l)
        os << e << ' ';
    return os;
}

int main()
{
    {
        F l1 = { 1, 2, 3, 4, 5 };
        F l2 = { 10, 11, 12 };

        l2.splice_after(l2.cbegin(), l1, l1.cbegin(), l1.cend());
        // not equivalent to l2.splice_after(l2.cbegin(), l1);
        // which is equivalent to
        // l2.splice_after(l2.cbegin(), l1, l1.cbefore_begin(), l1.end());

        std::cout << "l1: " << l1 << "\n"
                                     "l2: "
                  << l2 << '\n';
    }

    // Compare two given lists and abort the program if they are not equal.
    auto equ = [](F const& p, std::initializer_list<int> const& q) {
        assert(std::ranges::equal(p, q));
    };

    // The following code demonstrates all three overloads (1),..(3).

    {
        F x = { 1, 2, 3, 4, 5 };
        F y = { 10, 11, 12 };
        x.splice_after(x.cbegin(), y); // (1)
        equ(x, { 1, 10, 11, 12, 2, 3, 4, 5 });
        equ(y, {});
    }

    {
        F x = { 1, 2, 3, 4, 5 };
        F y = { 10, 11, 12 };
        x.splice_after(x.cbegin(), y, y.cbegin()); // (2)
        equ(x, { 1, 11, 2, 3, 4, 5 });
        equ(y, { 10, 12 });
    }

    {
        F x = { 1, 2, 3, 4, 5 };
        F y = { 10, 11, 12 };
        x.splice_after(x.cbegin(), y, y.cbegin(), y.cend()); // (3)
        equ(x, { 1, 11, 12, 2, 3, 4, 5 });
        equ(y, { 10 });
    }
}
