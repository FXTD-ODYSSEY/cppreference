// cppreference link https://en.cppreference.com/w/cpp/container/vector/capacity
#include <iomanip>
#include <iostream>
#include <vector>

int main()
{
    int sz = 100;
    std::vector<int> v;

    auto cap = v.capacity();
    std::cout << "Initial size: " << v.size() << ", capacity: " << cap << '\n';

    std::cout << "\nDemonstrate the capacity's growth policy."
                 "\nSize:  Capacity:  Ratio:\n"
              << std::left;
    while (sz-- > 0) {
        v.push_back(sz);
        if (cap != v.capacity()) {
            std::cout << std::setw(7) << v.size()
                      << std::setw(11) << v.capacity()
                      << std::setw(10) << v.capacity() / static_cast<float>(cap) << '\n';
            cap = v.capacity();
        }
    }

    std::cout << "\nFinal size: " << v.size() << ", capacity: " << v.capacity() << '\n';
}
