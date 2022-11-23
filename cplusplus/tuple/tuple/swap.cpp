// cplusplus link https://cplusplus.com/reference/tuple\tuple\swap
// tuple::swap
#include <iostream> // std::cout
#include <tuple> // std::tuple, std::get

int main()
{
    std::tuple<int, char> a(10, 'x');
    std::tuple<int, char> b(20, 'y');

    a.swap(b);

    std::cout << "a contains: " << std::get<0>(a);
    std::cout << " and " << std::get<1>(a) << '\n';

    return 0;
}
