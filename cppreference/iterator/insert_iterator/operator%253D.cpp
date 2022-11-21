// cppreference link https://en.cppreference.com/w/cpp/iterator/insert_iterator/operator%3D
#include <deque>
#include <iostream>
#include <iterator>

int main()
{
    std::deque<int> q;
    std::insert_iterator<std::deque<int>> it(q, q.begin());

    for (int i = 0; i < 10; ++i)
        it = i; // inserts i

    for (auto& elem : q)
        std::cout << elem << ' ';
}
