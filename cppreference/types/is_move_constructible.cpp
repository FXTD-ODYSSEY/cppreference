// cppreference link https://en.cppreference.com/w/cpp/types/is_move_constructible
#include <iostream>
#include <type_traits>

struct Ex1 {
    std::string str; // member has a non-trivial but non-throwing move ctor
};

struct Ex2 {
    int n;
    Ex2(Ex2&&) = default; // trivial and non-throwing
};

struct NoMove {
    // prevents implicit declaration of default move constructor
    // however, the class is still move-constructible because its
    // copy constructor can bind to an rvalue argument
    NoMove(const NoMove&) { }
};

#define OUT(...) std::cout << #__VA_ARGS__ << ": " << __VA_ARGS__ << '\n'

int main()
{
    std::cout << std::boolalpha;
    OUT(std::is_move_constructible_v<Ex1>);
    OUT(std::is_trivially_move_constructible_v<Ex1>);
    OUT(std::is_nothrow_move_constructible_v<Ex1>);
    OUT(std::is_trivially_move_constructible_v<Ex2>);
    OUT(std::is_nothrow_move_constructible_v<Ex2>);
    OUT(std::is_move_constructible_v<NoMove>);
    OUT(std::is_nothrow_move_constructible_v<NoMove>);
}
