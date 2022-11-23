// cplusplus link https://cplusplus.com/reference/functional\logical_not
// logical_not example
#include <algorithm> // std::transform
#include <functional> // std::logical_not
#include <iostream> // std::cout, std::boolalpha

int main()
{
    bool values[] = { true, false };
    bool result[2];
    std::transform(values, values + 2, result, std::logical_not<bool>());
    std::cout << std::boolalpha << "Logical NOT:\n";
    for (int i = 0; i < 2; i++)
        std::cout << "NOT " << values[i] << " = " << result[i] << "\n";
    return 0;
}
