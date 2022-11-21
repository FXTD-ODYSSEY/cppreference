// cppreference link https://en.cppreference.com/w/cpp/io/basic_osyncstream/emit
#include <iostream>
#include <syncstream>
int main()
{
    {
        std::osyncstream bout(std::cout);
        bout << "Hello," << '\n'; // no flush
        bout.emit(); // characters transferred; cout not flushed
        bout << "World!" << std::endl; // flush noted; cout not flushed
        bout.emit(); // characters transferred; cout flushed
        bout << "Greetings." << '\n'; // no flush
    } // destructor calls emit(): characters transferred; cout not flushed

    // emit can be used for local exception-handling on the wrapped stream
    std::osyncstream bout(std::cout);
    bout << "Hello, "
         << "World!" << '\n';
    try {
        bout.emit();
    } catch (...) {
        // handle exceptions
    }
}
