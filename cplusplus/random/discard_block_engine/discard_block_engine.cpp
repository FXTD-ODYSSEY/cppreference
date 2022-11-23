// cplusplus link https://cplusplus.com/reference/random\discard_block_engine\discard_block_engine
// discard_block_engine constructor
#include <chrono>
#include <iostream>
#include <random>

int main()
{
    // ranlux24 is a standard discard_block_engine type:
    std::ranlux24 g1;

    std::ranlux24 g2(g1.base());

    std::ranlux24_base temp;
    std::ranlux24 g3(std::move(temp));

    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::ranlux24 g4(seed);

    std::seed_seq sseq({ 2, 16, 77 });
    std::ranlux24 g5(sseq);

    std::cout << "g1(): " << g1() << std::endl;
    std::cout << "g2(): " << g2() << std::endl;
    std::cout << "g3(): " << g3() << std::endl;
    std::cout << "g4(): " << g4() << std::endl;
    std::cout << "g5(): " << g5() << std::endl;

    return 0;
}
