// cppreference link https://en.cppreference.com/w/cpp/experimental/unique_resource/make_unique_resource_checked
#include <cstdio>
#include <experimental/scope>

int main()
{
    // avoid calling fclose when fopen fails
    auto file = std::experimental::make_unique_resource_checked(
        std::fopen("potentially_nonexistent_file.txt", "r"),
        nullptr,
        [](std::FILE* fptr) { std::fclose(fptr); });
    if (file.get()) {
        std::puts("The file exits.");
    } else {
        std::puts("The file does not exist.");
    }
}
