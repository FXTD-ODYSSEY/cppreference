// cppreference link https://en.cppreference.com/w/cpp/iterator/back_insert_iterator/operator%3D
#include <deque>
#include <iostream>
#include <iterator>

int main()
{
    std::deque<int> q;
    std::back_insert_iterator<std::deque<int>> it(q);

    for (int i = 0; i < 10; ++i)
        it = i; // calls q.push_back(i)

    for (auto& elem : q)
        std::cout << elem << ' ';
}
