// cplusplus link https://cplusplus.com/reference/utility\pair\operators
// pair relational operators
#include <iostream> // std::cout
#include <utility> // std::pair

int main()
{
    std::pair<int, char> foo(10, 'z');
    std::pair<int, char> bar(90, 'a');

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
