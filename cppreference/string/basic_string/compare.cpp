// cppreference link https://en.cppreference.com/w/cpp/string/basic_string/compare
#include <cassert>
#include <iostream>
#include <string>

int main()
{
    std::string batman { "Batman" };
    std::string superman { "Superman" };
    int compare_result { 0 };

    // 1) Compare with other string
    compare_result = batman.compare(superman);
    std::cout << "1) " << (compare_result < 0 ? "Batman comes before Superman.\n" : compare_result > 0 ? "Superman comes before Batman.\n"
                                                                                                       : "Superman and Batman are the same.\n");

    // 2) Compare substring with other string
    compare_result = batman.compare(3, 3, superman);
    std::cout << "2) " << (compare_result < 0 ? "man comes before Superman.\n" : compare_result > 0 ? "Superman comes before man.\n"
                                                                                                    : "man and Superman are the same.\n");

    // 3) Compare substring with other substring
    compare_result = batman.compare(3, 3, superman, 5, 3);
    std::cout << "3) " << (compare_result < 0 ? "man comes before man.\n" : compare_result > 0 ? "man comes before man.\n"
                                                                                               : "man and man are the same.\n");

    // Compare substring with other substring
    // defaulting to end of other string
    assert(compare_result == batman.compare(3, 3, superman, 5));

    // 4) Compare with char pointer
    compare_result = batman.compare("Superman");
    std::cout << "4) " << (compare_result < 0 ? "Batman comes before Superman.\n" : compare_result > 0 ? "Superman comes before Batman.\n"
                                                                                                       : "Superman and Batman are the same.\n");

    // 5) Compare substring with char pointer
    compare_result = batman.compare(3, 3, "Superman");
    std::cout << "5) " << (compare_result < 0 ? "man comes before Superman.\n" : compare_result > 0 ? "Superman comes before man.\n"
                                                                                                    : "man and Superman are the same.\n");

    // 6) Compare substring with char pointer substring
    compare_result = batman.compare(0, 3, "Superman", 5);
    std::cout << "6) " << (compare_result < 0 ? "Bat comes before Super.\n" : compare_result > 0 ? "Super comes before Bat.\n"
                                                                                                 : "Super and Bat are the same.\n");
}
