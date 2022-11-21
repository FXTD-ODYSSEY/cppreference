// cppreference link https://en.cppreference.com/w/cpp/error/assert
#include <iostream>
// uncomment to disable assert()
// #define NDEBUG
#include <cassert>

// Use (void) to silence unused warnings.
#define assertm(exp, msg) assert(((void)msg, exp))

int main()
{
    assert(2 + 2 == 4);
    std::cout << "Checkpoint #1\n";

    assert((void("void helps to avoid 'unused value' warning"), 2 * 2 == 4));
    std::cout << "Checkpoint #2\n";

    assert((010 + 010 == 16) && "Yet another way to add an assert message");
    std::cout << "Checkpoint #3\n";

    assertm((2 + 2) % 3 == 1, "Expect expected");
    std::cout << "Checkpoint #4\n";

    assertm(2 + 2 == 5, "There are five lights"); // assertion fails
    std::cout << "Execution continues past the last assert\n"; // No
}
