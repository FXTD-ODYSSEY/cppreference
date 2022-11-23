// cplusplus link https://cplusplus.com/reference/functional\placeholders
using namespace std::placeholders;
auto bound_fn = std::bind(fn, 100, _1);
bound_fn(5); // calls fn(100,5), i.e.: replacing _1 by the first argument: 5
