// cppreference link https://en.cppreference.com/w/cpp/locale/numpunct/truefalsename
#include <iomanip>
#include <iostream>
#include <locale>

struct custom_tf : std::numpunct<char> {
    std::string do_truename() const { return "t"; }
    std::string do_falsename() const { return "f"; }
};

int main()
{
    std::cout << std::boolalpha;

    // default boolalpha output
    std::cout << "Default locale," << '\n'
              << "  boolalpha  true: " << true << '\n'
              << "  boolalpha false: " << false << "\n\n";

    // with custom_tf applied to locale
    std::cout.imbue(std::locale(std::cout.getloc(), new custom_tf));
    std::cout << "Locale with modified numpunct," << '\n'
              << "  boolalpha  true: " << true << '\n'
              << "  boolalpha false: " << false << '\n';
}
