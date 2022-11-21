// cppreference link https://en.cppreference.com/w/cpp/iterator/front_insert_iterator/operator%3D
#include <deque>
#include <iostream>
#include <iterator>

int main()
{
    std::deque<int> q;
    std::front_insert_iterator<std::deque<int>> it(q);

    for (int i = 0; i < 10; ++i)
        it = i; // calls q.push_front(i)

    for (auto& elem : q)
        std::cout << elem << ' ';
}
