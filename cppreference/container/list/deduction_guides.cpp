// cppreference link https://en.cppreference.com/w/cpp/container/list/deduction_guides
#include <list>
#include <vector>
int main()
{
    std::vector<int> v = { 1, 2, 3, 4 };

    // uses explicit deduction guide to deduce std::list<int>
    std::list x(v.begin(), v.end());

    // deduces std::list<std::vector<int>::iterator>
    // first phase of overload resolution for list-initialization selects the candidate
    // synthesized from the initializer-list constructor; second phase is not performed and
    // deduction guide has no effect
    std::list y { v.begin(), v.end() };
}
