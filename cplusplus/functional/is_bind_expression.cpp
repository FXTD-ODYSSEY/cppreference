// cplusplus link https://cplusplus.com/reference/functional\is_bind_expression
// is_bind_expression example
#include <functional> // std::bind, std::plus, std::placeholders, std::is_bind_expression
#include <iostream> // std::cout, std::boolalpha

int main()
{
    using namespace std::placeholders; // introduces _1
    auto increase_int = std::bind(std::plus<int>(), _1, 1);

    std::cout << std::boolalpha;
    std::cout << std::is_bind_expression<decltype(increase_int)>::value << '\n';

    return 0;
}
