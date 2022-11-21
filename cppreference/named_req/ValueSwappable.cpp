// cppreference link https://en.cppreference.com/w/cpp/named_req/ValueSwappable
#include <iostream>
#include <vector>

class IntVector {
    std::vector<int> v;
    //  IntVector& operator=(IntVector); // not assignable (C++98 way)
public:
    IntVector& operator=(IntVector) = delete; // not assignable
    void swap(IntVector& other)
    {
        v.swap(other.v);
    }
};
void swap(IntVector& v1, IntVector& v2)
{
    v1.swap(v2);
}

int main()
{
    IntVector v1, v2; // IntVector is Swappable, but not MoveAssignable
    IntVector* p1 = &v1;
    IntVector* p2 = &v2; // IntVector* is ValueSwappable
    std::iter_swap(p1, p2); // OK: iter_swap requires ValueSwappable
    //  std::swap(v1, v2); // compiler error! std::swap requires MoveAssignable
}
