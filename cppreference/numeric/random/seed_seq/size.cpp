// cppreference link https://en.cppreference.com/w/cpp/numeric/random/seed_seq/size
#include <iostream>
#include <random>
int main()
{
    std::seed_seq s1 = { -1, 0, 1 };
    std::cout << s1.size() << '\n';
}
