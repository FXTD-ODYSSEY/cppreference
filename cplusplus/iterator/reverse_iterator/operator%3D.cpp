// cplusplus link https://cplusplus.com/reference/iterator\reverse_iterator\operator%3D
// reverse_iterator::operator= example
#include <iostream> // std::cout
#include <vector> // std::vector

int main()
{
    std::vector<int> myvector { 10, 20, 30, 40, 50 };

    std::vector<int>::const_reverse_iterator from, until;

    // reverse_iterator assignments:
    from = myvector.rbegin();
    until = myvector.rend();

    std::cout << "reversed myvector:";
    while (from != until)
        std::cout << ' ' << *from++;
    std::cout << '\n';

    return 0;
}
