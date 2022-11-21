// cppreference link https://en.cppreference.com/w/cpp/iterator/common_iterator/incrementable_traits
#include <cstddef>
#include <iterator>
#include <list>
#include <string>
#include <type_traits>

int main()
{
    using CI = std::common_iterator<
        std::counted_iterator<int*>,
        std::default_sentinel_t>;
    using CL = std::common_iterator<
        std::counted_iterator<std::list<std::string>::iterator>,
        std::default_sentinel_t>;
    CL cl { std::default_sentinel };
    static_assert(
        std::same_as<std::incrementable_traits<CI>::difference_type, std::ptrdiff_t> && std::same_as<std::incrementable_traits<CL>::difference_type, std::ptrdiff_t> && std::same_as<std::incrementable_traits<decltype(cl)>::difference_type, std::ptrdiff_t>);
}
