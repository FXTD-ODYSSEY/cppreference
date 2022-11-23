// cplusplus link https://cplusplus.com/reference/valarray\valarray\valarray
// valarray constructor example
#include <iostream> // std::cout
#include <valarray> // std::valarray, std::slice

int main()
{
    int init[] = { 10, 20, 30, 40 };
    std::valarray<int> first; // (empty)
    std::valarray<int> second(5); // 0 0 0 0 0
    std::valarray<int> third(10, 3); // 10 10 10
    std::valarray<int> fourth(init, 4); // 10 20 30 40
    std::valarray<int> fifth(fourth); // 10 20 30 40
    std::valarray<int> sixth(fifth[std::slice(1, 2, 1)]); // 20 30

    std::cout << "sixth sums " << sixth.sum() << '\n';

    return 0;
}
