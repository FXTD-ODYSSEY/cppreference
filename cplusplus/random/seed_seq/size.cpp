// cplusplus link https://cplusplus.com/reference/random\seed_seq\size
// seed_seq::size
#include <array>
#include <iostream>
#include <iterator>
#include <random>

int main()
{
    std::seed_seq seed = { 102, 406, 7892 };

    std::cout << "size: " << seed.size() << std::endl;

    std::ostream_iterator<unsigned> out(std::cout, " ");
    std::cout << "elements: ";
    seed.param(out);
    std::cout << std::endl;

    return 0;
}
