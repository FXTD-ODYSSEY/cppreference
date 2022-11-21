// cppreference link https://en.cppreference.com/w/cpp/iterator/reverse_iterator/operator-
#include <iostream>
#include <iterator>
#include <list>
#include <vector>

int main()
{
    std::vector vec { 0, 1, 2, 3 };
    std::reverse_iterator<std::vector<int>::iterator>
        vec_ri1 { std::reverse_iterator { vec.rbegin() } },
        vec_ri2 { std::reverse_iterator { vec.rend() } };
    std::cout << (vec_ri2 - vec_ri1) << ' '; // 4
    std::cout << (vec_ri1 - vec_ri2) << '\n'; // -4

    std::list lst { 5, 6, 7, 8 };
    std::reverse_iterator<std::list<int>::iterator>
        lst_ri1 { std::reverse_iterator { lst.rbegin() } },
        lst_ri2 { std::reverse_iterator { lst.rend() } };
    //  auto n = (lst_ri1 - lst_ri2); // error: the underlying iterators do not
    // model the random access iterators
}
