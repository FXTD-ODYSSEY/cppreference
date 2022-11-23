// cplusplus link https://cplusplus.com/reference/functional\unary_function
// unary_function example
#include <functional> // std::unary_function
#include <iostream> // std::cout, std::cin

struct IsOdd : public std::unary_function<int, bool> {
    bool operator()(int number) { return (number % 2 != 0); }
};

int main()
{
    IsOdd IsOdd_object;
    IsOdd::argument_type input;
    IsOdd::result_type result;

    std::cout << "Please enter a number: ";
    std::cin >> input;

    result = IsOdd_object(input);

    std::cout << "Number " << input << " is " << (result ? "odd" : "even") << ".\n";

    return 0;
}
