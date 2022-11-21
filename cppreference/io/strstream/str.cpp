// cppreference link https://en.cppreference.com/w/cpp/io/strstream/str
#include <iostream>
#include <strstream>

int main()
{
    std::strstream dyn; // dynamically-allocated output buffer
    dyn << "Test: " << 1.23; // not adding std::ends to demonstrate append behavior
    std::cout << "The output stream holds \"";
    std::cout.write(dyn.str(), dyn.pcount()) << "\"\n";
    // the stream is now frozen due to str()
    dyn << " More text" << std::ends;
    std::cout << "The output stream holds \"";
    std::cout.write(dyn.str(), dyn.pcount()) << "\"\n";
    dyn.freeze(false);
}
