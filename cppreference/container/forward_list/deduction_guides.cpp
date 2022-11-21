// cppreference link https://en.cppreference.com/w/cpp/container/forward_list/deduction_guides
#include <forward_list>
#include <vector>
int main()
{
    std::vector<int> v = { 1, 2, 3, 4 };

    // uses explicit deduction guide to deduce std::forward_list<int>
    std::forward_list x(v.begin(), v.end());

    // deduces std::forward_list<std::vector<int>::iterator>
    // first phase of overload resolution for list-initialization selects the candidate
    // synthesized from the initializer-list constructor; second phase is not performed and
    // deduction guide has no effect
    std::forward_list y { v.begin(), v.end() };
}
