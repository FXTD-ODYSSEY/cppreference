// cppreference link https://en.cppreference.com/w/cpp/io/basic_ostream/operator%3D
#include <iostream>
#include <sstream>
#include <utility>
int main()
{
    std::ostringstream s;
    //  std::cout = s;                             // ERROR: copy assignment operator is deleted
    //  std::cout = std::move(s);                  // ERROR: move assignment operator is protected
    s = std::move(std::ostringstream() << 42); // OK, moved through derived
    std::cout << s.str() << '\n';
}
