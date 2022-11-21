// cppreference link https://en.cppreference.com/w/cpp/utility/program/_Exit
#include <iostream>

class Static {
public:
    ~Static()
    {
        std::cout << "Static dtor\n";
    }
};

class Local {
public:
    ~Local()
    {
        std::cout << "Local dtor\n";
    }
};

Static static_variable; // dtor of this object will *not* be called

void atexit_handler()
{
    std::cout << "atexit handler\n";
}

int main()
{
    Local local_variable; // dtor of this object will *not* be called

    // handler will *not* be called
    const int result = std::atexit(atexit_handler);

    if (result != 0) {
        std::cerr << "atexit registration failed\n";
        return EXIT_FAILURE;
    }

    std::cout << "test" << std::endl; // flush from std::endl
                                      // needs to be here, otherwise nothing will be printed
    std::_Exit(EXIT_FAILURE);
}
