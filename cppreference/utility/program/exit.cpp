// cppreference link https://en.cppreference.com/w/cpp/utility/program/exit
#include <cstdlib>
#include <iostream>

struct Static {
    ~Static()
    {
        std::cout << "Static destructor\n";
    }
};

struct Local {
    ~Local()
    {
        std::cout << "Local destructor\n";
    }
};

Static static_variable; // destructor of this object *will* be called

void atexit_handler()
{
    std::cout << "atexit handler\n";
}

int main()
{
    Local local_variable; // destructor of this object will *not* be called
    const int result = std::atexit(atexit_handler); // handler will be called

    if (result != 0) {
        std::cerr << "atexit registration failed\n";
        return EXIT_FAILURE;
    }

    std::cout << "test\n";
    std::exit(EXIT_FAILURE);

    std::cout << "this line will *not* be executed\n";
}
