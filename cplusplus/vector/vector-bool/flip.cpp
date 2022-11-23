// cplusplus link https://cplusplus.com/reference/vector\vector-bool\flip
// vector<bool>::flip
#include <iostream>
#include <vector>

int main()
{
    std::vector<bool> mask;

    mask.push_back(true);
    mask.push_back(false);
    mask.push_back(false);
    mask.push_back(true);

    mask.flip();

    std::cout << std::boolalpha;
    std::cout << "mask contains:";
    for (unsigned i = 0; i < mask.size(); i++)
        std::cout << ' ' << mask.at(i);
    std::cout << '\n';

    return 0;
}
