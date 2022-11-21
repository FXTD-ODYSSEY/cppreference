// cppreference link https://en.cppreference.com/w/cpp/algorithm/set_intersection
#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
int main()
{
    std::vector<int> v1 { 1, 2, 3, 4, 5, 6, 7, 8 };
    std::vector<int> v2 { 5, 7, 9, 10 };
    std::sort(v1.begin(), v1.end());
    std::sort(v2.begin(), v2.end());

    std::vector<int> v_intersection;

    std::set_intersection(v1.begin(), v1.end(),
        v2.begin(), v2.end(),
        std::back_inserter(v_intersection));
    for (int n : v_intersection)
        std::cout << n << ' ';
}