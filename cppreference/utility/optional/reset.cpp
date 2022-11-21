// cppreference link https://en.cppreference.com/w/cpp/utility/optional/reset
#include <iostream>
#include <optional>

struct A {
    std::string s;
    A(std::string str)
        : s(std::move(str))
    {
        std::cout << " constructed\n";
    }
    ~A() { std::cout << " destructed\n"; }
    A(const A& o)
        : s(o.s)
    {
        std::cout << " copy constructed\n";
    }
    A(A&& o)
        : s(std::move(o.s))
    {
        std::cout << " move constructed\n";
    }
    A& operator=(const A& other)
    {
        s = other.s;
        std::cout << " copy assigned\n";
        return *this;
    }
    A& operator=(A&& other)
    {
        s = std::move(other.s);
        std::cout << " move assigned\n";
        return *this;
    }
};

int main()
{
    std::cout << "Create empty optional:\n";
    std::optional<A> opt;

    std::cout << "Construct and assign value:\n";
    opt = A("Lorem ipsum dolor sit amet, consectetur adipiscing elit nec.");

    std::cout << "Reset optional:\n";
    opt.reset();
    std::cout << "End example\n";
}
