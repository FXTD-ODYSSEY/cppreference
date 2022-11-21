// cppreference link https://en.cppreference.com/w/cpp/utility/launder
#include <cassert>
#include <cstddef>
#include <new>

struct Y {
    int z;
};

struct A {
    virtual int transmogrify();
};

struct B : A {
    int transmogrify() override
    {
        new (this) A;
        return 2;
    }
};

int A::transmogrify()
{
    new (this) B;
    return 1;
}

static_assert(sizeof(B) == sizeof(A));

int main()
{
    // Case 1: the new object failed to be transparently replaceable because it is a
    // base subobject but the old object is a complete object.
    A i;
    int n = i.transmogrify();
    // int m = i.transmogrify(); // undefined behavior
    int m = std::launder(&i)->transmogrify(); // OK
    assert(m + n == 3);

    // Case 2: access to a new object whose storage is provided by a byte array through
    // a pointer to the array.
    alignas(Y) std::byte s[sizeof(Y)];
    Y* q = new (&s) Y { 2 };
    const int f = reinterpret_cast<Y*>(&s)->z; // Class member access is undefined behavior:
                                               // reinterpret_cast<Y*>(&s) has value
                                               // "pointer to s" and does not
                                               // point to a Y object
    const int g = q->z; // OK
    const int h = std::launder(reinterpret_cast<Y*>(&s))->z; // OK

    [f, g, h] {}; // suppresses "unused-variable" warnings; see also [[maybe_unused]].
}
