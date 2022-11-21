// cppreference link https://en.cppreference.com/w/cpp/utility/program/quick_exit
#include <cstdlib>
#include <iostream>

template <int N>
void quick_exit_handler()
{
    std::cout << "quick_exit handler #" << N << std::endl; // flush is intended
}

void at_exit_handler()
{
    std::cout << "at_exit handler\n";
}

int main()
{
    if (std::at_quick_exit(quick_exit_handler<1>) or std::at_quick_exit(quick_exit_handler<2>)) {
        std::cerr << "Registration failed\n";
        return EXIT_FAILURE;
    }

    std::atexit(at_exit_handler); // the handler will not be called

    struct R {
        ~R() { std::cout << "destructor\n"; }
    } resource;

    /*...*/

    std::quick_exit(EXIT_SUCCESS);

    std::cout << "This statement is unreachable...\n";
}
