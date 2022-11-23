// cplusplus link https://cplusplus.com/reference/functional\bit_and
// bit_and example
#include <algorithm> // std::transform
#include <functional> // std::bit_and
#include <iostream> // std::cout
#include <iterator> // std::end

int main()
{
    int values[] = { 100, 200, 300, 400, 500 };
    int masks[] = { 0xf, 0xf, 0xf, 255, 255 };
    int results[5];

    std::transform(values, std::end(values), masks, results, std::bit_and<int>());

    std::cout << "results:";
    for (const int& x : results)
        std::cout << ' ' << x;
    std::cout << '\n';

    return 0;
}
