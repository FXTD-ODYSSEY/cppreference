// cppreference link https://en.cppreference.com/w/cpp/iterator/reverse_iterator
#include <cstddef>
#include <iostream>
#include <iterator>

template <typename T, std::size_t SIZE>
class Stack {
    T arr[SIZE];
    std::size_t pos = 0;

public:
    T pop()
    {
        return arr[--pos];
    }
    Stack& push(const T& t)
    {
        arr[pos++] = t;
        return *this;
    }
    // we wish that looping on Stack would be in LIFO order
    // thus we use std::reverse_iterator as an adaptor to existing iterators
    // (which are in this case the simple pointers: [arr, arr+pos)
    auto begin() { return std::reverse_iterator(arr + pos); }
    auto end() { return std::reverse_iterator(arr); }
};

int main()
{
    Stack<int, 8> s;
    s.push(5).push(15).push(25).push(35);
    for (int val : s)
        std::cout << val << ' ';
}
