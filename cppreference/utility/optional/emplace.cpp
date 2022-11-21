// cppreference link https://en.cppreference.com/w/cpp/utility/optional/emplace
#include <iostream>
#include <optional>

struct A {
    std::string s;
    A(std::string str)
        : s(std::move(str))
        , id { n++ }
    {
        note("+ constructed");
    }
    ~A() { note("~ destructed"); }
    A(const A& o)
        : s(o.s)
        , id { n++ }
    {
        note("+ copy constructed");
    }
    A(A&& o)
        : s(std::move(o.s))
        , id { n++ }
    {
        note("+ move constructed");
    }
    A& operator=(const A& other)
    {
        s = other.s;
        note("= copy assigned");
        return *this;
    }
    A& operator=(A&& other)
    {
        s = std::move(other.s);
        note("= move assigned");
        return *this;
    }
    inline static int n {};
    int id {};
    void note(auto s) { std::cout << "  " << s << " #" << id << '\n'; }
};

int main()
{
    std::optional<A> opt;

    std::cout << "Assign:\n";
    opt = A("Lorem ipsum dolor sit amet, consectetur adipiscing elit nec.");

    std::cout << "Emplace:\n";
    // As opt contains a value it will also destroy that value
    opt.emplace("Lorem ipsum dolor sit amet, consectetur efficitur.");

    std::cout << "End example\n";
}
