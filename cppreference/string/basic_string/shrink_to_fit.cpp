// cppreference link https://en.cppreference.com/w/cpp/string/basic_string/shrink_to_fit
#include <iostream>
#include <string>

int main()
{
    std::string s;
    std::cout << "Size of std::string is " << sizeof s << " bytes\n"
              << "Default-constructed capacity is " << s.capacity()
              << " and size is " << s.size() << '\n';
    for (int i = 0; i < 42; i++)
        s.append(" 42 ");
    std::cout << "Capacity after 42 appends is " << s.capacity()
              << " and size is " << s.size() << '\n';
    s.clear();
    std::cout << "Capacity after clear() is " << s.capacity()
              << " and size is " << s.size() << '\n';
    s.shrink_to_fit();
    std::cout << "Capacity after shrink_to_fit() is " << s.capacity()
              << " and size is " << s.size() << '\n';
}
