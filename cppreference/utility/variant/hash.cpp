// cppreference link https://en.cppreference.com/w/cpp/utility/variant/hash
#include <iostream>
#include <string>
#include <variant>

using Var = std::variant<int, int, int, std::string>;

template <unsigned I>
void print(Var const& var)
{
    std::cout << "get<" << var.index() << "> = "
              << std::get<I>(var)
              << "\t"
                 "# = "
              << std::hash<Var> {}(var) << '\n';
}

int main()
{
    Var var;
    std::get<0>(var) = 2020;
    print<0>(var);
    var.emplace<1>(2023);
    print<1>(var);
    var.emplace<2>(2026);
    print<2>(var);
    var = "C++";
    print<3>(var);
}
