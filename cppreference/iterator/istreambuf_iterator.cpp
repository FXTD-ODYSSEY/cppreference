// cppreference link https://en.cppreference.com/w/cpp/iterator/istreambuf_iterator
#include <iostream>
#include <iterator>
#include <sstream>
#include <string>

int main()
{
    // typical use case: an input stream represented as a pair of iterators
    std::istringstream in { "Hello, world" };
    std::istreambuf_iterator<char> it { in }, end;
    std::string ss { it, end };
    std::cout << "ss has " << ss.size() << " bytes; "
                                           "it holds \""
              << ss << "\"\n";

    // demonstration of the single-pass nature
    std::istringstream s { "abc" };
    std::istreambuf_iterator<char> i1 { s }, i2 { s };
    std::cout << "i1 returns '" << *i1 << "'\n"
                                          "i2 returns '"
              << *i2 << "'\n";

    ++i1;
    std::cout << "after incrementing i1, but not i2:\n"
                 "i1 returns '"
              << *i1 << "'\n"
                        "i2 returns '"
              << *i2 << "'\n";

    ++i2;
    std::cout << "after incrementing i2, but not i1:\n"
                 "i1 returns '"
              << *i1 << "'\n"
                        "i2 returns '"
              << *i2 << "'\n";
}
