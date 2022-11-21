// cppreference link https://en.cppreference.com/w/cpp/container/deque/deduction_guides
#include <deque>
#include <vector>
int main()
{
    std::vector<int> v = { 1, 2, 3, 4 };

    // uses explicit deduction guide to deduce std::deque<int>
    std::deque x(v.begin(), v.end());

    // deduces std::deque<std::vector<int>::iterator>
    // first phase of overload resolution for list-initialization selects the candidate
    // synthesized from the initializer-list constructor; second phase is not performed and
    // deduction guide has no effect
    std::deque y { v.begin(), v.end() };
}
