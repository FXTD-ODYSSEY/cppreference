// cplusplus link https://cplusplus.com/reference/iterator\reverse_iterator\operator-%3E
// reverse_iterator::operator-> example
#include <iostream> // std::cout
#include <iterator> // std::reverse_iterator
#include <map> // std::map
#include <string> // std::string
#include <utility> // std::make_pair

int main()
{
    std::map<int, std::string> numbers;
    numbers.insert(std::make_pair(1, "one"));
    numbers.insert(std::make_pair(2, "two"));
    numbers.insert(std::make_pair(3, "three"));

    typedef std::map<int, std::string>::iterator map_iter;

    std::reverse_iterator<map_iter> rev_end(numbers.begin());

    std::reverse_iterator<map_iter> rev_iterator(numbers.end());

    for (; rev_iterator != rev_end; ++rev_iterator)
        std::cout << rev_iterator->first << ' ' << rev_iterator->second << '\n';

    return 0;
}
