// cppreference link https://en.cppreference.com/w/cpp/language/ebo
struct Empty { }; // empty class

struct X {
    int i;
    [[no_unique_address]] Empty e;
};

int main()
{
    // the size of any object of empty class type is at least 1
    static_assert(sizeof(Empty) >= 1);

    // empty member optimized out:
    static_assert(sizeof(X) == sizeof(int));
}
