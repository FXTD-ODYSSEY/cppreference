// cplusplus link https://cplusplus.com/reference/iterator\begin
// std::begin / std::end example
#include <iostream> // std::cout
#include <vector> // std::vector, std::begin, std::end

int main()
{
    int foo[] = { 10, 20, 30, 40, 50 };
    std::vector<int> bar;

    // iterate foo: inserting into bar
    for (auto it = std::begin(foo); it != std::end(foo); ++it)
        bar.push_back(*it);

    // iterate bar: print contents:
    std::cout << "bar contains:";
    for (auto it = std::begin(bar); it != std::end(bar); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

    return 0;
}
