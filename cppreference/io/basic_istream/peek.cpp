// cppreference link https://en.cppreference.com/w/cpp/io/basic_istream/peek
#include <iostream>
#include <sstream>
int main()
{
    std::istringstream s1("Hello, world.");
    char c1 = s1.peek();
    char c2 = s1.get();
    std::cout << "Peeked: " << c1 << " got: " << c2 << '\n';
}
