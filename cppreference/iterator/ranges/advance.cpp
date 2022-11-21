// cppreference link https://en.cppreference.com/w/cpp/iterator/ranges/advance
#include <iomanip>
#include <iostream>
#include <iterator>
#include <vector>

int main()
{
    std::vector<int> v { 3, 1, 4 };

    auto vi = v.begin();

    std::ranges::advance(vi, 2);
    std::cout << "value: " << *vi << '\n';

    {
        std::ranges::advance(vi, v.end());
        std::cout << std::boolalpha;
        std::cout << "vi == v.end(): " << (vi == v.end()) << '\n';

        std::ranges::advance(vi, -3);
        std::cout << "value: " << *vi << '\n';

        std::cout << "diff: " << std::ranges::advance(vi, 2, v.end()) << ", ";
        std::cout << "value: " << *vi << '\n';

        std::cout << "diff: " << std::ranges::advance(vi, 4, v.end()) << ", ";
        std::cout << "vi == v.end(): " << (vi == v.end()) << '\n';
        std::cout << std::noboolalpha;
    }
}
