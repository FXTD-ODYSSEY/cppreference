// cppreference link https://en.cppreference.com/w/cpp/container/vector/empty
#include <iostream>
#include <vector>

int main()
{
    std::cout << std::boolalpha;
    std::vector<int> numbers;
    std::cout << "Initially, numbers.empty(): " << numbers.empty() << '\n';

    numbers.push_back(42);
    std::cout << "After adding elements, numbers.empty(): " << numbers.empty() << '\n';
}
