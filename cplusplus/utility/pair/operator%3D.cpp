// cplusplus link https://cplusplus.com/reference/utility\pair\operator%3D
// pair::operator= example
#include <iostream> // std::cout
#include <string> // std::string
#include <utility> // std::pair, std::make_pair

int main()
{
    std::pair<std::string, int> planet, homeplanet;

    planet = std::make_pair("Earth", 6371);

    homeplanet = planet;

    std::cout << "Home planet: " << homeplanet.first << '\n';
    std::cout << "Planet size: " << homeplanet.second << '\n';
    return 0;
}
