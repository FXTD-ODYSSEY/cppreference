// cplusplus link https://cplusplus.com/reference/valarray\valarray\size
// valarray::size example
#include <iostream> // std::cout
#include <valarray> // std::valarray

int main()
{
    std::valarray<int> myvalarray;
    std::cout << "1. After construction: " << myvalarray.size() << '\n';

    myvalarray = std::valarray<int>(5);
    std::cout << "2. After assignment: " << myvalarray.size() << '\n';

    myvalarray.resize(3);
    std::cout << "3. After downsizing: " << myvalarray.size() << '\n';

    myvalarray.resize(10);
    std::cout << "4. After resizing up: " << myvalarray.size() << '\n';

    return 0;
}
