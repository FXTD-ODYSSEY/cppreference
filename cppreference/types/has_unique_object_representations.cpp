// cppreference link https://en.cppreference.com/w/cpp/types/has_unique_object_representations
#include <iostream>
#include <type_traits>

struct foo {
    char c;
    float f;
    short st;
    int i;
};

struct bar {
    int a;
    int b;
};

int main()
{
    std::cout << std::boolalpha
              << "Does foo have unique object representations? "
              << std::has_unique_object_representations_v<foo> << '\n'
              << "Does bar have unique object representations? "
              << std::has_unique_object_representations_v<bar> << '\n';
}
