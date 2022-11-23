// cplusplus link https://cplusplus.com/reference/random\independent_bits_engine\independent_bits_engine
// independent_bits_engine constructor
#include <chrono>
#include <cstdint>
#include <iostream>
#include <random>

int main()
{
    typedef std::independent_bits_engine<std::mt19937, 64, std::uint_fast64_t> generator_type;

    generator_type g1;

    generator_type g2(g1.base());

    std::mt19937 temp;
    generator_type g3(std::move(temp));

    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    generator_type g4(seed);

    std::seed_seq sseq({ 2, 16, 77 });
    generator_type g5(sseq);

    std::cout << "g1(): " << g1() << std::endl;
    std::cout << "g2(): " << g2() << std::endl;
    std::cout << "g3(): " << g3() << std::endl;
    std::cout << "g4(): " << g4() << std::endl;
    std::cout << "g5(): " << g5() << std::endl;

    return 0;
}
