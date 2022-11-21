// cppreference link https://en.cppreference.com/w/cpp/container/deque/empty
#include <deque>
#include <iostream>

int main()
{
    std::deque<int> numbers;
    std::cout << std::boolalpha;
    std::cout << "Initially, numbers.empty(): " << numbers.empty() << '\n';

    numbers.push_back(42);
    numbers.push_back(13317);
    std::cout << "After adding elements, numbers.empty(): " << numbers.empty() << '\n';
}
