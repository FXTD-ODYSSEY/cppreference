// cplusplus link https://cplusplus.com/reference/random\seed_seq\seed_seq
// seed_seq constructor
#include <array>
#include <iostream>
#include <random>
#include <string>

int main()
{

    std::seed_seq seed1;

    std::seed_seq seed2 = { 102, 406, 7892 };

    std::string foo = "Seeding a RNG";
    std::seed_seq seed3(foo.begin(), foo.end());

    std::cout << "generating a sequence of 5 elements:" << std::endl;
    std::array<unsigned, 5> sequence;
    seed3.generate(sequence.begin(), sequence.end());
    for (unsigned x : sequence) {
        std::cout << x << std::endl;
    }

    return 0;
}
