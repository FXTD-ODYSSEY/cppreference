// cplusplus link https://cplusplus.com/reference/tuple\tuple\operator%3D
// tuple assignments
#include <iostream> // std::cout
#include <tuple> // std::tuple, std::make_tuple, std::get
#include <utility> // std::pair

int main()
{
    std::pair<int, char> mypair(0, ' ');

    std::tuple<int, char> a(10, 'x');
    std::tuple<long, char> b, c;

    b = a; // copy assignment
    c = std::make_tuple(100L, 'Y'); // move assignment
    a = c; // conversion assignment
    c = std::make_tuple(100, 'z'); // conversion / move assignment
    a = mypair; // from pair assignment
    a = std::make_pair(2, 'b'); // form pair /move assignment

    std::cout << "c contains: " << std::get<0>(c);
    std::cout << " and " << std::get<1>(c) << '\n';

    return 0;
}
