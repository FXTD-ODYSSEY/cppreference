// cppreference link https://en.cppreference.com/w/cpp/memory/shared_ptr/%7Eshared_ptr
#include <iostream>
#include <memory>

struct S {
    S() { std::cout << "S::S()\n"; }
    ~S() { std::cout << "S::~S()\n"; }
    struct Deleter {
        void operator()(S* s) const
        {
            std::cout << "S::Deleter()\n";
            delete s;
        }
    };
};

int main()
{
    auto sp = std::shared_ptr<S> { new S, S::Deleter {} };

    auto use_count = [&sp](char c) {
        std::cout << c << ") use_count(): " << sp.use_count() << '\n';
    };

    use_count('A');
    {
        auto sp2 = sp;
        use_count('B');
        {
            auto sp3 = sp;
            use_count('C');
        }
        use_count('D');
    }
    use_count('E');

    //  sp.reset();
    //  use_count('F'); // would print "F) use_count(): 0"
}
