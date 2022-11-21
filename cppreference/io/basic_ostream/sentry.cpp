// cppreference link https://en.cppreference.com/w/cpp/io/basic_ostream/sentry
#include <iostream>
#include <sstream>

struct Foo {
    char n[6];
};

std::ostream& operator<<(std::ostream& os, Foo& f)
{
    std::ostream::sentry s(os);
    if (s) {
        os.write(f.n, 5);
    }
    return os;
}

int main()
{
    Foo f = { "abcde" };
    std::cout << f << '\n';
}
