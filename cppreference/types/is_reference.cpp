// cppreference link https://en.cppreference.com/w/cpp/types/is_reference
#include <iostream>
#include <type_traits>

class A { };

int main()
{
#define REF(x) << #x "?: " << x << '\n'
    std::cout << std::boolalpha
            REF(std::is_reference_v<A>)
                REF(std::is_reference_v<A&>)
                    REF(std::is_reference_v<A&&>)
                        REF(std::is_reference_v<long>)
                            REF(std::is_reference_v<long&>)
                                REF(std::is_reference_v<long&&>)
                                    REF(std::is_reference_v<double*>)
                                        REF(std::is_reference_v<double*&>)
                                            REF(std::is_reference_v<double*&&>);
#undef REF
}
