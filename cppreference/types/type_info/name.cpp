// cppreference link https://en.cppreference.com/w/cpp/types/type_info/name
#include <boost/core/demangle.hpp>

#include <iostream>
#include <typeinfo>

struct Base {
    virtual ~Base() = default;
};
struct Derived : Base { };

int main()
{
    Base b1;
    Derived d1;

    const Base* pb = &b1;
    std::cout << typeid(*pb).name() << '\n';
    pb = &d1;
    std::cout << typeid(*pb).name() << '\n';

    std::string real_name = boost::core::demangle(typeid(pb).name());
    std::cout << typeid(pb).name() << " => " << real_name << '\n';
}
