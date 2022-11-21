// cppreference link https://en.cppreference.com/w/cpp/container/deque
#include <deque>
#include <iostream>

int main()
{
    // Create a deque containing integers
    std::deque<int> d = { 7, 5, 16, 8 };

    // Add an integer to the beginning and end of the deque
    d.push_front(13);
    d.push_back(25);

    // Iterate and print values of deque
    for (int n : d)
        std::cout << n << ' ';
}
