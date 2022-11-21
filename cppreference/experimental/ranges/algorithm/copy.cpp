// cppreference link https://en.cppreference.com/w/cpp/experimental/ranges/algorithm/copy
#include <experimental/ranges/algorithm>
#include <experimental/ranges/iterator>
#include <iostream>
#include <numeric>
#include <vector>

int main()
{
    // see http://en.cppreference.com/w/cpp/language/namespace_alias
    namespace ranges = std::experimental::ranges;

    std::vector<int> from_vector(10);
    std::iota(from_vector.begin(), from_vector.end(), 0);

    std::vector<int> to_vector;
    ranges::copy_if(from_vector.begin(), from_vector.end(),
        ranges::back_inserter(to_vector),
        [](const auto i) {
            return i % 3;
        });
    // or, alternatively,
    //  std::vector<int> to_vector(from_vector.size());
    //  std::copy(from_vector, to_vector.begin());

    std::cout << "to_vector contains: ";

    ranges::copy(to_vector, ranges::ostream_iterator<int>(std::cout, " "));
    std::cout << '\n';
}
