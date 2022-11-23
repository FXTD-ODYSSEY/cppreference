// cplusplus link https://cplusplus.com/reference/string\basic_string\operators
// string comparisons
#include <iostream>
#include <vector>

int main()
{
    std::string foo = "alpha";
    std::string bar = "beta";

    if (foo == bar)
        std::cout << "foo and bar are equal\n";
    if (foo != bar)
        std::cout << "foo and bar are not equal\n";
    if (foo < bar)
        std::cout << "foo is less than bar\n";
    if (foo > bar)
        std::cout << "foo is greater than bar\n";
    if (foo <= bar)
        std::cout << "foo is less than or equal to bar\n";
    if (foo >= bar)
        std::cout << "foo is greater than or equal to bar\n";

    return 0;
}
