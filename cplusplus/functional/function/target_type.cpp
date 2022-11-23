// cplusplus link https://cplusplus.com/reference/functional\function\target_type
// function::target_type example
#include <functional> // std::function, std::plus, std::minus
#include <iostream> // std::cout, std::boolalpha
#include <typeinfo> // typeid

int plus_function(int a, int b) { return a + b; }
int minus_function(int a, int b) { return a - b; }

int main()
{
    std::function<int(int, int)> plus1 = plus_function;
    std::function<int(int, int)> plus2 = std::plus<int>();
    std::function<int(int, int)> minus1 = minus_function;
    std::function<int(int, int)> minus2 = std::minus<int>();

    std::cout << "pointers as targets:\n"
              << std::boolalpha;
    std::cout << "plus1 : " << (plus1.target_type() == typeid(int (*)(int, int))) << '\n';
    std::cout << "plus2 : " << (plus2.target_type() == typeid(int (*)(int, int))) << '\n';
    std::cout << "minus1: " << (minus1.target_type() == typeid(int (*)(int, int))) << '\n';
    std::cout << "minus2: " << (minus2.target_type() == typeid(int (*)(int, int))) << '\n';
    std::cout << '\n';

    std::cout << "same type?:\n";
    std::cout << "(plus1, plus2) : " << (plus1.target_type() == plus2.target_type()) << '\n';
    std::cout << "(minus1,minus2): " << (minus1.target_type() == minus2.target_type()) << '\n';
    std::cout << "(plus1, minus1): " << (plus1.target_type() == minus1.target_type()) << '\n';
    std::cout << "(plus2, minus2): " << (plus2.target_type() == minus2.target_type()) << '\n';

    return 0;
}
