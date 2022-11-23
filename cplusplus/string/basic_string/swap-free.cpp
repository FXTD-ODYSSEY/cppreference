// cplusplus link https://cplusplus.com/reference/string\basic_string\swap-free
// swap strings
#include <iostream>
#include <string>

main()
{
    std::string buyer("money");
    std::string seller("goods");

    std::cout << "Before the swap, buyer has " << buyer;
    std::cout << " and seller has " << seller << '\n';

    swap(buyer, seller);

    std::cout << " After the swap, buyer has " << buyer;
    std::cout << " and seller has " << seller << '\n';

    return 0;
}
