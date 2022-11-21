// cppreference link https://en.cppreference.com/w/cpp/memory/enable_shared_from_this/operator%3D
#include <iostream>
#include <memory>

class SharedInt : public std::enable_shared_from_this<SharedInt> {
public:
    explicit SharedInt(int n)
        : mNumber(n)
    {
    }
    SharedInt(const SharedInt&) = default;
    SharedInt(SharedInt&&) = default;
    ~SharedInt() = default;

    // Both assignment operators use enable_shared_from_this::operator=
    SharedInt& operator=(const SharedInt&) = default;
    SharedInt& operator=(SharedInt&&) = default;

    int number() const { return mNumber; }

private:
    int mNumber;
};

int main()
{
    std::shared_ptr<SharedInt> a = std::make_shared<SharedInt>(2);
    std::shared_ptr<SharedInt> b = std::make_shared<SharedInt>(4);
    *a = *b;

    std::cout << a->number() << std::endl;
}
