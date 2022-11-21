// cppreference link https://en.cppreference.com/w/cpp/utility/initializer_list/size
#include <initializer_list>
int main() { static_assert(std::initializer_list { 1, 2, 3, 4 }.size() == 4); }
