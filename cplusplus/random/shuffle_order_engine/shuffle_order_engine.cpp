// cplusplus link https://cplusplus.com/reference/random\shuffle_order_engine\shuffle_order_engine
// shuffle_order_engine constructor
#include <chrono>
#include <iostream>
#include <random>

int main()
{
    // knuth_b is a standard shuffle_order_engine type:
    std::knuth_b g1;

    std::knuth_b g2(g1.base());

    std::minstd_rand0 temp;
    std::knuth_b g3(std::move(temp));

    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::knuth_b g4(seed);

    std::seed_seq sseq({ 2, 16, 77 });
    std::knuth_b g5(sseq);

    std::cout << "g1(): " << g1() << std::endl;
    std::cout << "g2(): " << g2() << std::endl;
    std::cout << "g3(): " << g3() << std::endl;
    std::cout << "g4(): " << g4() << std::endl;
    std::cout << "g5(): " << g5() << std::endl;

    return 0;
}
