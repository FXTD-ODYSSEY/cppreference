// cplusplus link https://cplusplus.com/reference/locale\collate\hash
// collate::hash example
#include <iostream> // std::cin, std::cout
#include <locale> // std::locale, std::collate, std::use_facet
#include <string> // std::string, std::getline

int main()
{
    std::string myberry = "strawberry";
    std::string yourberry;

    std::locale loc; // the "C" locale

    const std::collate<char>& coll = std::use_facet<std::collate<char>>(loc);

    long myhash = coll.hash(myberry.data(), myberry.data() + myberry.length());

    std::cout << "Please, enter your favorite berry: ";
    std::getline(std::cin, yourberry);

    long yourhash = coll.hash(yourberry.data(), yourberry.data() + yourberry.length());

    if (myhash == yourhash)
        std::cout << "Mine too!\n";
    else
        std::cout << "I prefer strawberries...\n";

    return 0;
}
