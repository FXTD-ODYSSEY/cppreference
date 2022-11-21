// cppreference link https://en.cppreference.com/w/cpp/iterator/common_iterator/iterator_traits
#include <iterator>
#include <type_traits>
#include <vector>

int main()
{
    std::vector v { 1, 2, 3, 4 };
    using CV = std::common_iterator<
        std::counted_iterator<std::vector<int>::iterator>,
        std::default_sentinel_t>;
    CV i { std::counted_iterator { v.begin(), 3 } };
    using TRCV = std::iterator_traits<decltype(i)>;
    static_assert(std::is_same<TRCV::iterator_concept, std::forward_iterator_tag>());
    static_assert(std::is_same<TRCV::iterator_category, std::forward_iterator_tag>());
    static_assert(std::is_same<TRCV::value_type, int>());
    static_assert(std::is_same<TRCV::difference_type, std::vector<int>::difference_type>());
    static_assert(std::is_same<TRCV::pointer, decltype(i.operator->())>());
    static_assert(std::is_same<TRCV::reference, int&>());

    CV s { std::default_sentinel };
    using TRCS = std::iterator_traits<decltype(s)>;
    static_assert(std::is_same<TRCS::iterator_concept, std::forward_iterator_tag>());
    static_assert(std::is_same<TRCS::iterator_category, std::forward_iterator_tag>());
    static_assert(std::is_same<TRCS::value_type, int>());
    static_assert(std::is_same<TRCS::difference_type, std::vector<int>::difference_type>());
    static_assert(std::is_same<TRCS::pointer, decltype(s.operator->())>());
    static_assert(std::is_same<TRCS::reference, int&>());
}
