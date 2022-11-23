// cplusplus link https://cplusplus.com/reference/random
auto dice = std::bind(distribution, generator);
int wisdom = dice() + dice() + dice();
