// cplusplus link https://cplusplus.com/reference/memory\addressof
// addressof example
#include <iostream>
#include <memory>

struct unreferenceable {
    int x;
    unreferenceable* operator&() { return nullptr; }
};

void print(unreferenceable* m)
{
    if (m)
        std::cout << m->x << '\n';
    else
        std::cout << "[null pointer]\n";
}

int main()
{
    void (*pfn)(unreferenceable*) = std::addressof(print);

    unreferenceable val { 10 };
    unreferenceable* foo = &val;
    unreferenceable* bar = std::addressof(val);

    (*pfn)(foo); // prints [null pointer]
    (*pfn)(bar); // prints 10

    return 0;
}
