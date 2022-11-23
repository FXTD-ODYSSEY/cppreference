// cplusplus link https://cplusplus.com/reference/locale\locale\operator%28%29
// locale::operator() example
#include <algorithm> // std::sort
#include <iostream> // std::cout, std::boolalpha
#include <locale> // std::locale
#include <string> // std::string

int main(void)
{
    std::string mystr[] = { "light", "zoo", "apple" };
    std::locale loc; // default global locale

    std::cout << std::boolalpha;

    // implicit call to locale::operator() (using operator)
    std::cout << mystr[0] << " < " << mystr[1] << " ? ";
    std::cout << (loc(mystr[0], mystr[1])) << '\n';

    // explicit call to locale::operator() (using functional call)
    std::cout << mystr[1] << " < " << mystr[2] << " ? ";
    std::cout << (loc.operator()(mystr[1], mystr[2])) << '\n';

    // locale::operator() as comparison predicate for algorithm:
    std::sort(mystr, mystr + 3, loc);
    std::cout << "sorted sequence:";
    for (int i = 0; i < 3; i++)
        std::cout << ' ' << mystr[i];
    std::cout << '\n';
    return 0;
}
