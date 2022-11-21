// cppreference link https://en.cppreference.com/w/cpp/container/unordered_set/empty
#include <iostream>
#include <unordered_set>

int main()
{
    std::unordered_set<int> numbers;
    std::cout << std::boolalpha;
    std::cout << "Initially, numbers.empty(): " << numbers.empty() << '\n';

    numbers.insert(42);
    numbers.insert(13317);
    std::cout << "After adding elements, numbers.empty(): " << numbers.empty() << '\n';
}
