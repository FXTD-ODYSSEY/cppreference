// cppreference link https://en.cppreference.com/w/cpp/named_req/ReversibleContainer
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v = { 3, 1, 4, 1, 5, 9 };

    for (std::vector<int>::reverse_iterator i = v.rbegin(); i != v.rend(); ++i) {
        std::cout << *i << ' ';
    }
}
