// cppreference link https://en.cppreference.com/w/cpp/ranges/take_view/take_view
#include <bit>
#include <bitset>
#include <iomanip>
#include <iostream>
#include <limits>
#include <ranges>

constexpr unsigned clog2(auto x) // ~ ⌈ log₂(x) ⌉
{
    return std::numeric_limits<decltype(x)>::digits - std::countl_zero(x);
}

template <unsigned Primes>
struct Sieve {
    bool operator()(int n)
    {
        if (n < 2)
            return false;
        if (n == 2)
            return true;
        if (n % 2 == 0 || bits.test(n / 2))
            return false;
        for (int i { n }, j { 3 }, k {}; (k = i * j) < size; j += 2)
            bits.set(k / 2);
        return true;
    }

    static constexpr int prime_numbers = Primes;

    // a(n) ~= n*(log(n) + log(log(n)));
    static constexpr int size = Primes * (clog2(Primes) + clog2(clog2(Primes)));

    // Keep only odd numbers; 0 means it is a prime
private:
    std::bitset<size / 2 + 1> bits;
};

int main()
{
    Sieve<100> sieve {};
    auto primes_gen = std::views::iota(1)
        | std::views::filter(sieve);

    auto primes = std::ranges::take_view { primes_gen, sieve.prime_numbers };

    for (int n { 1 }; auto prime : primes) {
        std::cout << prime << (n++ % 10 ? ' ' : '\n');
    }

    std::cout
        << "\n"
           "sieve.prime_numbers: "
        << sieve.prime_numbers
        << "\n"
           "sieve.size: "
        << sieve.size
        << "\n"
           "sizeof(sieve): "
        << sizeof sieve << " bytes\n";
}
