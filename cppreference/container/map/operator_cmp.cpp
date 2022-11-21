// cppreference link https://en.cppreference.com/w/cpp/container/map/operator_cmp
#include <iostream>
#include <map>

int main()
{
    std::map<int, char> alice { { 1, 'a' }, { 2, 'b' }, { 3, 'c' } };
    std::map<int, char> bob { { 7, 'Z' }, { 8, 'Y' }, { 9, 'X' }, { 10, 'W' } };
    std::map<int, char> eve { { 1, 'a' }, { 2, 'b' }, { 3, 'c' } };

    std::cout << std::boolalpha;

    // Compare non equal containers
    std::cout << "alice == bob returns " << (alice == bob) << '\n';
    std::cout << "alice!= bob returns " << (alice != bob) << '\n';
    std::cout << "alice <  bob returns " << (alice < bob) << '\n';
    std::cout << "alice <= bob returns " << (alice <= bob) << '\n';
    std::cout << "alice >  bob returns " << (alice > bob) << '\n';
    std::cout << "alice >= bob returns " << (alice >= bob) << '\n';

    std::cout << '\n';

    // Compare equal containers
    std::cout << "alice == eve returns " << (alice == eve) << '\n';
    std::cout << "alice!= eve returns " << (alice != eve) << '\n';
    std::cout << "alice <  eve returns " << (alice < eve) << '\n';
    std::cout << "alice <= eve returns " << (alice <= eve) << '\n';
    std::cout << "alice >  eve returns " << (alice > eve) << '\n';
    std::cout << "alice >= eve returns " << (alice >= eve) << '\n';
}
