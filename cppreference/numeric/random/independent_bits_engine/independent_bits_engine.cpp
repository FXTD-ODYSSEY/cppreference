// cppreference link https://en.cppreference.com/w/cpp/numeric/random/independent_bits_engine/independent_bits_engine
#include <iostream>
#include <random>

int main()
{
    auto print = [](auto rem, auto engine, int count) {
        std::cout << rem << ": ";
        for (int i {}; i != count; ++i)
            std::cout << static_cast<unsigned>(engine()) << ' ';
        std::cout << '\n';
    };

    std::independent_bits_engine<std::mt19937, /*bits*/ 1, unsigned short>
        e1; // default-constructed
    print("e1", e1, 8);

    std::independent_bits_engine<std::mt19937, /*bits*/ 1, unsigned int>
        e2(1); // constructed with 1
    print("e2", e2, 8);

    std::random_device rd;
    std::independent_bits_engine<std::mt19937, /*bits*/ 3, unsigned long>
        e3(rd()); // seeded with rd()
    print("e3", e3, 8);

    std::seed_seq s { 3, 1, 4, 1, 5 };
    std::independent_bits_engine<std::mt19937, /*bits*/ 3, unsigned long long>
        e4(s); // seeded with seed-sequence s
    print("e4", e4, 8);
}
