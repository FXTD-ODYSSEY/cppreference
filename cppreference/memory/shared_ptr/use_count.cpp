// cppreference link https://en.cppreference.com/w/cpp/memory/shared_ptr/use_count
#include <iostream>
#include <memory>

void fun(std::shared_ptr<int> sp)
{
    std::cout << "in fun(): sp.use_count() == " << sp.use_count()
              << " (object @ " << sp << ")\n";
}

int main()
{
    auto sp1 = std::make_shared<int>(5);
    std::cout << "in main(): sp1.use_count() == " << sp1.use_count()
              << " (object @ " << sp1 << ")\n";

    fun(sp1);
}
