// cppreference link https://en.cppreference.com/w/cpp/memory/c/free
#include <cstdlib>

int main()
{
    int* p1 = (int*)std::malloc(10 * sizeof *p1);
    std::free(p1); // every allocated pointer must be freed

    int* p2 = (int*)std::calloc(10, sizeof *p2);
    int* p3 = (int*)std::realloc(p2, 1000 * sizeof *p3);
    if (!p3) // p3 null means realloc failed and p2 must be freed.
        std::free(p2);
    std::free(p3); // p3 can be freed whether or not it is null.
}
