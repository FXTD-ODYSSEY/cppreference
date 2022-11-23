// cplusplus link https://cplusplus.com/reference/locale\collate\compare
// collate::compare example
#include <iostream> // std::cout
#include <locale> // std::locale, std::collate, std::use_facet
#include <string> // std::string

int main()
{
    char first[] = "STRAWBERRY"; // c-string
    std::string second = "BLUEBERRY"; // standard string

    std::locale loc; // get "C" locale

    // get collate facet:
    const std::collate<char>& coll = std::use_facet<std::collate<char>>(loc);

    int result = coll.compare(first, first + 10,
        second.data(), second.data() + second.length());
    std::cout << first;
    switch (result) {
    case 1:
        std::cout << " is greater than ";
        break;
    case 0:
        std::cout << " is equal to ";
        break;
    case -1:
        std::cout << " is less than ";
        break;
    }
    std::cout << second << '\n';
    return 0;
}
