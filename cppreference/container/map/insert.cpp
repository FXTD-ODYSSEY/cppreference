// cppreference link https://en.cppreference.com/w/cpp/container/map/insert
#include <iomanip>
#include <iostream>
#include <map>
#include <string>

using namespace std::literals;

template <typename It>
void print_insertion_status(It it, bool success)
{
    std::cout << "Insertion of " << it->first
              << (success ? " succeeded\n" : " failed\n");
}

int main()
{
    std::map<std::string, float> heights;

    // Overload 3: insert from rvalue reference
    const auto [it_hinata, success] = heights.insert({ "Hinata"s, 162.8 });
    print_insertion_status(it_hinata, success);

    {
        // Overload 1: insert from lvalue reference
        const auto [it, success2] = heights.insert(*it_hinata);
        print_insertion_status(it, success2);
    }
    {
        // Overload 2: insert via forwarding to emplace
        const auto [it, success] = heights.insert(std::pair { "Kageyama", 180.6 });
        print_insertion_status(it, success);
    }

    {
        // Overload 6: insert from rvalue reference with positional hint
        const std::size_t n = std::size(heights);
        const auto it = heights.insert(it_hinata, { "Azumane"s, 184.7 });
        print_insertion_status(it, std::size(heights) != n);
    }
    {
        // Overload 4: insert from lvalue reference with positional hint
        const std::size_t n = std::size(heights);
        const auto it = heights.insert(it_hinata, *it_hinata);
        print_insertion_status(it, std::size(heights) != n);
    }
    {
        // Overload 5: insert via forwarding to emplace with positional hint
        const std::size_t n = std::size(heights);
        const auto it = heights.insert(it_hinata, std::pair { "Tsukishima", 188.3 });
        print_insertion_status(it, std::size(heights) != n);
    }

    auto node_hinata = heights.extract(it_hinata);
    std::map<std::string, float> heights2;

    // Overload 7: insert from iterator range
    heights2.insert(std::begin(heights), std::end(heights));

    // Overload 8: insert from initializer_list
    heights2.insert({ { "Kozume"s, 169.2 }, { "Kuroo", 187.7 } });

    // Overload 9: insert node
    const auto status = heights2.insert(std::move(node_hinata));
    print_insertion_status(status.position, status.inserted);

    node_hinata = heights2.extract(status.position);
    {
        // Overload 10: insert node with positional hint
        const std::size_t n = std::size(heights2);
        const auto it = heights2.insert(std::begin(heights2), std::move(node_hinata));
        print_insertion_status(it, std::size(heights2) != n);
    }

    // Print resulting map
    std::cout << std::left << '\n';
    for (const auto& [name, height] : heights2)
        std::cout << std::setw(10) << name << " | " << height << "cm\n";
}
