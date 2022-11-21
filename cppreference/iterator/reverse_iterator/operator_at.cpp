// cppreference link https://en.cppreference.com/w/cpp/iterator/reverse_iterator/operator_at
#include <array>
#include <cstddef>
#include <iostream>
#include <iterator>
#include <list>
#include <vector>

int main()
{
    {
        int a[] { 0, 1, 2, 3 };
        std::reverse_iterator<int*> iter { std::rbegin(a) };
        for (std::size_t i {}; i != std::size(a); ++i)
            std::cout << iter[i] << ' '; // decltype(iter[i]) is `int&`
        std::cout << '\n';
    }
    {
        std::vector v { 0, 1, 2, 3 };
        std::reverse_iterator<std::vector<int>::iterator> iter { std::rbegin(v) };
        for (std::size_t i {}; i != std::size(v); ++i)
            std::cout << iter[i] << ' '; // decltype(iter[i]) is `int&`
        std::cout << '\n';
    }
    {
        // constexpr context
        constexpr static std::array<int, 4> z { 0, 1, 2, 3 };
        constexpr std::reverse_iterator<decltype(z)::const_iterator> it { std::crbegin(z) };
        static_assert(it[1] == 2);
    }
    {
        std::list li { 0, 1, 2, 3 };
        std::reverse_iterator<std::list<int>::iterator> iter { std::rbegin(li) };
        *iter = 42; // OK
        //  iter[0] = 13; // compilation error ~ the underlying iterator
        // does not model the random access iterator
    }
}
