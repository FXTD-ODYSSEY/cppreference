// cplusplus link https://cplusplus.com/reference/functional\greater_equal
// greater_equal example
#include <algorithm> // std::count_if
#include <functional> // std::greater_equal, std::bind2nd
#include <iostream> // std::cout

int main()
{
    int numbers[] = { 20, -30, 10, -40, 0 };
    int cx = std::count_if(numbers, numbers + 5, std::bind2nd(std::greater_equal<int>(), 0));
    std::cout << "There are " << cx << " non-negative elements.\n";
    return 0;
}
