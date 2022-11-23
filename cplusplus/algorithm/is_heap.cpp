// cplusplus link https://cplusplus.com/reference/algorithm\is_heap
// is_heap example
#include <algorithm> // std::is_heap, std::make_heap, std::pop_heap
#include <iostream> // std::cout
#include <vector> // std::vector

int main()
{
    std::vector<int> foo { 9, 5, 2, 6, 4, 1, 3, 8, 7 };

    if (!std::is_heap(foo.begin(), foo.end()))
        std::make_heap(foo.begin(), foo.end());

    std::cout << "Popping out elements:";
    while (!foo.empty()) {
        std::pop_heap(foo.begin(), foo.end()); // moves largest element to back
        std::cout << ' ' << foo.back(); // prints back
        foo.pop_back(); // pops element out of container
    }
    std::cout << '\n';

    return 0;
}
