// cppreference link https://en.cppreference.com/w/cpp/utility/any/any
#include <boost/core/demangle.hpp>

#include <any>
#include <initializer_list>
#include <iostream>
#include <memory>
#include <set>
#include <string>
#include <utility>

struct A {
    int age;
    std::string name;
    double salary;

#if __cpp_aggregate_paren_init < 201902L
    // Required before C++20 for in-place construction
    A(int age, std::string name, double salary)
        : age(age)
        , name(std::move(name))
        , salary(salary)
    {
    }
#endif
};

// using abi demangle to print nice type name of instance of any holding
void printType(const std::any& a)
{
    std::cout << boost::core::demangle(a.type().name()) << '\n';
}

int main()
{
    // constructor #4: std::any holding int
    std::any a1 { 7 };

    // constructor #5: std::any holding A, constructed in place
    std::any a2(std::in_place_type<A>, 30, "Ada", 1000.25);

    // constructor #6: std::any holding a set of A with custom comparison
    auto lambda = [](auto&& l, auto&& r) { return l.age < r.age; };
    std::any a3(
        std::in_place_type<std::set<A, decltype(lambda)>>,
        { A { 39, std::string { "Ada" }, 100.25 },
            A { 20, std::string { "Bob" }, 75.5 } },
        lambda);

    printType(a1);
    printType(a2);
    printType(a3);
}
