// cppreference link https://en.cppreference.com/w/cpp/iterator/counted_iterator/operator_arith
#include <cassert>
#include <initializer_list>
#include <iterator>

int main()
{
    const auto v = { 1, 2, 3, 4, 5, 6 };
    std::counted_iterator<std::initializer_list<int>::iterator> it1 { v.begin(), 5 };

    ++it1;
    assert(*it1 == 2 && it1.count() == 4); // (1)
    auto it2 = it1++;
    assert(*it2 == 2 && *it1 == 3); // (3)
    --it1;
    assert(*it1 == 2 && it1.count() == 4); // (4)
    auto it3 = it1--;
    assert(*it3 == 2 && *it1 == 1); // (5)
    auto it4 = it1 + 3;
    assert(*it4 == 4 && it4.count() == 2); // (6)
    auto it5 = it4 - 3;
    assert(*it5 == 1 && it5.count() == 5); // (8)
    it1 += 3;
    assert(*it1 == 4 && it1.count() == 2); // (7)
    it1 -= 3;
    assert(*it1 == 1 && it1.count() == 5); // (9)
}
