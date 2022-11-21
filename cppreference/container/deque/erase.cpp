// cppreference link https://en.cppreference.com/w/cpp/container/deque/erase
#include <deque>
#include <iostream>

void print_container(const std::deque<int>& c)
{
    for (int i : c)
        std::cout << i << " ";
    std::cout << '\n';
}

int main()
{
    std::deque<int> c { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    print_container(c);

    c.erase(c.begin());
    print_container(c);

    c.erase(c.begin() + 2, c.begin() + 5);
    print_container(c);

    // Erase all even numbers
    for (std::deque<int>::iterator it = c.begin(); it != c.end();) {
        if (*it % 2 == 0)
            it = c.erase(it);
        else
            ++it;
    }
    print_container(c);
}
