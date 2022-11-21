// cppreference link https://en.cppreference.com/w/cpp/utility/optional/transform
#include <iostream>
#include <optional>

struct A {
    friend std::ostream& operator<<(std::ostream& os, A) { return os << 'A'; }
};
struct B {
    friend std::ostream& operator<<(std::ostream& os, B) { return os << 'B'; }
};
struct C {
    friend std::ostream& operator<<(std::ostream& os, C) { return os << 'C'; }
};
struct D {
    friend std::ostream& operator<<(std::ostream& os, D) { return os << 'D'; }
};

auto A_to_B(A in)
{
    B out;
    std::cout << in << " => " << out << '\n';
    return out;
}
auto B_to_C(B in)
{
    C out;
    std::cout << in << " => " << out << '\n';
    return out;
}
auto C_to_D(C in)
{
    D out;
    std::cout << in << " => " << out << '\n';
    return out;
}

int main()
{
    for (std::optional<A> o_A : { std::optional<A> { A {} }, std::optional<A> { /*empty*/ } }) {
        std::cout << (o_A ? "o_A has a value\n" : "o_A is empty\n");

        std::optional<D> o_D = o_A.transform(A_to_B)
                                   .transform(B_to_C)
                                   .transform(C_to_D);

        std::cout << (o_D ? "o_D has a value\n\n" : "o_D is empty\n\n");
    }
}
