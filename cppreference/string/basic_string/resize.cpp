// cppreference link https://en.cppreference.com/w/cpp/string/basic_string/resize
#include <iomanip>
#include <iostream>
#include <stdexcept>

int main()
{
    const unsigned desired_length { 8 };
    std::string long_string("Where is the end?");
    std::string short_string("H");

    std::cout << "Basic functionality:\n"
              << "Shorten:\n"
              << "1. Before: " << quoted(long_string) << '\n';
    long_string.resize(desired_length);
    std::cout << "2. After:  " << quoted(long_string) << '\n';

    std::cout << "Lengthen with a given value 'a':\n"
              << "3. Before: " << quoted(short_string) << '\n';
    short_string.resize(desired_length, 'a');
    std::cout << "4. After:  " << quoted(short_string) << '\n';

    std::cout << "Lengthen with char() == " << static_cast<int>(char()) << '\n'
              << "5. Before: " << quoted(short_string) << '\n';
    short_string.resize(desired_length + 3);
    std::cout << "6. After:  \"";
    for (char c : short_string) {
        std::cout << (c == char() ? '@' : c);
    }
    std::cout << "\"\n\n";

    std::cout << "Errors:\n";
    {
        std::string s;

        try {
            // size is OK, no length_error
            // (may throw bad_alloc)
            s.resize(s.max_size() - 1, 'x');
        } catch (const std::bad_alloc& ex) {
            std::cout << "1. Exception: " << ex.what() << '\n';
        }

        try {
            // size is OK, no length_error
            // (may throw bad_alloc)
            s.resize(s.max_size(), 'x');
        } catch (const std::bad_alloc& ex) {
            std::cout << "2. Exception: " << ex.what() << '\n';
        }

        try {
            // size is BAD, throw length_error
            s.resize(s.max_size() + 1, 'x');
        } catch (const std::length_error& ex) {
            std::cout << "3. Length error: " << ex.what() << '\n';
        }
    }
}
