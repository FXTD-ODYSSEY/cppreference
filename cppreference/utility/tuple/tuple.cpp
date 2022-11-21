// cppreference link https://en.cppreference.com/w/cpp/utility/tuple/tuple
#include <iomanip>
#include <iostream>
#include <memory>
#include <string>
#include <tuple>
#include <type_traits>
#include <vector>

// helper function to print a vector to a stream
template <class Os, class T>
Os& operator<<(Os& os, std::vector<T> const& v)
{
    os << '{';
    for (auto i { v.size() }; const T& e : v)
        os << e << (--i ? "," : "");
    return os << '}';
}

template <class T>
void print_single(T const& v)
{
    if constexpr (std::is_same_v<T, std::decay_t<std::string>>)
        std::cout << std::quoted(v);
    else if constexpr (std::is_same_v<std::decay_t<T>, char>)
        std::cout << "'" << v << "'";
    else
        std::cout << v;
}

// helper function to print a tuple of any size
template <class Tuple, std::size_t N>
struct TuplePrinter {
    static void print(const Tuple& t)
    {
        TuplePrinter<Tuple, N - 1>::print(t);
        std::cout << ", ";
        print_single(std::get<N - 1>(t));
    }
};

template <class Tuple>
struct TuplePrinter<Tuple, 1> {
    static void print(const Tuple& t)
    {
        print_single(std::get<0>(t));
    }
};

template <class... Args>
void print(const std::tuple<Args...>& t)
{
    std::cout << "(";
    TuplePrinter<decltype(t), sizeof...(Args)>::print(t);
    std::cout << ")\n";
}
// end helper function

int main()
{
    std::tuple<int, std::string, double> t1;
    std::cout << "Value-initialized, t1: ";
    print(t1);
    std::tuple<int, std::string, double> t2 { 42, "Test", -3.14 };
    std::cout << "Initialized with values, t2: ";
    print(t2);
    std::tuple<char, std::string, int> t3 { t2 };
    std::cout << "Implicitly converted, t3: ";
    print(t3);
    std::tuple<int, double> t4 { std::make_pair(42, 3.14) };
    std::cout << "Constructed from a pair, t4: ";
    print(t4);

    // given Allocator my_alloc with a single-argument constructor
    // my_alloc(int); use my_alloc(1) to allocate 5 ints in a vector
    using my_alloc = std::allocator<int>;
    std::vector<int, my_alloc> v { 5, 1, my_alloc { /*1*/ } };
    // use my_alloc(2) to allocate 5 ints in a vector in a tuple
    std::tuple<int, std::vector<int, my_alloc>, double> t5 {
        std::allocator_arg, my_alloc { /*2*/ }, 42, v, -3.14
    };
    std::cout << "Constructed with allocator, t5: ";
    print(t5);
}
