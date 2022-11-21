// cppreference link https://en.cppreference.com/w/cpp/container/deque/insert
#include <deque>
#include <iostream>
#include <iterator>

void print(int id, const std::deque<int>& container)
{
    std::cout << id << ". ";
    for (const int x : container)
        std::cout << x << ' ';
    std::cout << '\n';
}

int main()
{
    std::deque<int> c1(3, 100);
    print(1, c1);

    auto it = c1.begin();
    it = c1.insert(it, 200);
    print(2, c1);

    c1.insert(it, 2, 300);
    print(3, c1);

    // reset `it` to the begin:
    it = c1.begin();

    std::deque<int> c2(2, 400);
    c1.insert(std::next(it, 2), c2.begin(), c2.end());
    print(4, c1);

    int arr[] = { 501, 502, 503 };
    c1.insert(c1.begin(), arr, arr + std::size(arr));
    print(5, c1);

    c1.insert(c1.end(), { 601, 602, 603 });
    print(6, c1);
}
