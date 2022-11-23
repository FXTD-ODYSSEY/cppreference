// cplusplus link https://cplusplus.com/reference/algorithm\includes
// includes algorithm example
#include <algorithm> // std::includes, std::sort
#include <iostream> // std::cout

bool myfunction(int i, int j) { return i < j; }

int main()
{
    int container[] = { 5, 10, 15, 20, 25, 30, 35, 40, 45, 50 };
    int continent[] = { 40, 30, 20, 10 };

    std::sort(container, container + 10);
    std::sort(continent, continent + 4);

    // using default comparison:
    if (std::includes(container, container + 10, continent, continent + 4))
        std::cout << "container includes continent!\n";

    // using myfunction as comp:
    if (std::includes(container, container + 10, continent, continent + 4, myfunction))
        std::cout << "container includes continent!\n";

    return 0;
}
