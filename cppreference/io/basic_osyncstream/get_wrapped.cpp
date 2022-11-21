// cppreference link https://en.cppreference.com/w/cpp/io/basic_osyncstream/get_wrapped
#include <iostream>
#include <syncstream>
int main()
{
    std::osyncstream bout1(std::cout);
    bout1 << "Hello, ";
    {
        std::osyncstream(bout1.get_wrapped()) << "Goodbye, "
                                              << "Planet!" << '\n';
    } // emits the contents of the temporary buffer
    bout1 << "World!" << '\n';
} // emits the contents of bout1