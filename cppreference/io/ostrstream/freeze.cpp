// cppreference link https://en.cppreference.com/w/cpp/io/ostrstream/freeze
#include <iostream>
#include <strstream>

int main()
{
    std::ostrstream dyn; // dynamically-allocated output buffer
    dyn << "Test: " << 1.23; // note: no std::ends to demonstrate appending
    std::cout << "The output stream contains \"";
    std::cout.write(dyn.str(), dyn.pcount()) << "\"\n";
    // the stream is now frozen due to str()
    dyn << " More text"; // output to a frozen stream may be truncated
    std::cout << "The output stream contains \"";
    std::cout.write(dyn.str(), dyn.pcount()) << "\"\n";
    dyn.freeze(false); // freeze(false) must be called or the  destructor will leak

    std::ostrstream dyn2; // dynamically-allocated output buffer
    dyn2 << "Test: " << 1.23; // note: no std::ends
    std::cout << "The output stream contains \"";
    std::cout.write(dyn2.str(), dyn2.pcount()) << "\"\n";
    dyn2.freeze(false); // unfreeze the stream after str()
    dyn2 << " More text" << std::ends; // output will not be truncated (buffer grows)
    std::cout << "The output stream contains \"" << dyn2.str() << "\"\n";
    dyn2.freeze(false); // freeze(false) must be called or the  destructor will leak
}
