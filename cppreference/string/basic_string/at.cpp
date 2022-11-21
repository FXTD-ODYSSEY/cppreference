// cppreference link https://en.cppreference.com/w/cpp/string/basic_string/at
#include <iostream>
#include <stdexcept>
#include <string>

int main()
{
    std::string s("message"); // for capacity

    s = "abc";
    s.at(2) = 'x'; // ok
    std::cout << s << '\n';

    std::cout << "string size = " << s.size() << '\n';
    std::cout << "string capacity = " << s.capacity() << '\n';

    try {
        // This will throw since the requested offset is greater than the current size.
        s.at(3) = 'x';
    } catch (std::out_of_range const& exc) {
        std::cout << exc.what() << '\n';
    }
}
