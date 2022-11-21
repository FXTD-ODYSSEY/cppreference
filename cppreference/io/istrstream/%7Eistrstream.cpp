// cppreference link https://en.cppreference.com/w/cpp/io/istrstream/%7Eistrstream
#include <iostream>
#include <strstream>

int main()
{
    {
        std::istrstream s("1.234");
        double d;
        s >> d;
        std::cout << d << '\n';
    } // destructor called
}
