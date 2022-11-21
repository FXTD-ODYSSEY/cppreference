// cppreference link https://en.cppreference.com/w/cpp/utility/bitset/reference
#include <bitset>
#include <iostream>

int main()
{
    std::bitset<4> bs(0b1110);

    std::bitset<4>::reference ref = bs[2]; // auto ref = bs[2];

    auto info = [&](int n) {
        std::cout << n << ") bs: " << bs << "; ref bit: " << ref << '\n';
    };

    info(1);
    ref = false;
    info(2);
    ref = true;
    info(3);
    ref.flip();
    info(4);
    ref = bs[1]; // operator=( const reference& x )
    info(5);

    std::cout << "6) ~ref bit: " << ~ref << '\n';
}
