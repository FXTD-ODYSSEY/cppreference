// cppreference link https://en.cppreference.com/w/cpp/container/vector/operator_at
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> numbers { 2, 4, 6, 8 };

    std::cout << "Second element: " << numbers[1] << '\n';

    numbers[0] = 5;

    std::cout << "All numbers:";
    for (auto i : numbers) {
        std::cout << ' ' << i;
    }
    std::cout << '\n';
}

// Since C++20 std::vector can be used in constexpr context:
#if defined(__cpp_lib_constexpr_vector) and defined(__cpp_consteval)
// Gets the sum of all primes in [0, N) using sieve of Eratosthenes
consteval auto sum_of_all_primes_up_to(unsigned N)
{
    if (N < 2)
        return 0ULL;

    std::vector<bool> is_prime(N, true);
    is_prime[0] = is_prime[1] = false;

    auto propagate_non_primality = [&](decltype(N) n) {
        for (decltype(N) m = n + n; m < is_prime.size(); m += n)
            is_prime[m] = false;
    };

    auto sum { 0ULL };
    for (decltype(N) n { 2 }; n != N; ++n) {
        if (is_prime[n]) {
            sum += n;
            propagate_non_primality(n);
        }
    }
    return sum;
} //< vector's memory is released here

static_assert(sum_of_all_primes_up_to(42) == 0xEE);
static_assert(sum_of_all_primes_up_to(100) == 0x424);
static_assert(sum_of_all_primes_up_to(1001) == 76127);
#endif
